//#include <stdlib.h>
//#include <math.h>
//#include <fstream>
//#include <iostream>
//#include "neuron.h"

#include "stdafx.h"
using namespace std;

static double SigmoidAlfa=1;
static bool SigmoidType=ORIGINAL;
static double tang_a=1;
static double tang_b=1;



void SigmType(bool ST)
{
	SigmoidType=ST;
}

void ParamAlfa(double alfa)
{
	SigmoidAlfa=alfa;
}
void ParamAB(double a, double b)
{
	tang_a=a;
    tang_b=b;
}

double Neuron::FuncSigmoid(double sum)
	{
		if (SigmoidType)
            return tang_a*tanh(tang_b*sum);
		else
			return 1/(1+exp(-SigmoidAlfa*sum));

	}
double Neuron_BP::D_Sigmoid(double vyhod)
	{
		if (SigmoidType)
            return (tang_b/tang_a)*(tang_a-vyhod)*(tang_a+vyhod);
		else
			return SigmoidAlfa*vyhod*(1-vyhod);
	}

Neuron::Neuron()// конструктор по умолчанию
{
} 
Neuron::Neuron(int inp_num) // конструктор
{
	vhod_size=inp_num;
weights=new double[vhod_size+1];
vhod=new double[vhod_size];
for(int i=0;i<vhod_size; i++)
   { weights[i]=0; vhod[i]=0;}
 weights[vhod_size]=0;
	 
}
Neuron::~Neuron()// деструктор
{
	 delete[] weights; 
	 delete[] vhod; 
}

   Neuron& Neuron::operator=(const Neuron &Neyron) 
   {
        //проверка на самоприсваивание
        if (this != &Neyron) 
		{
			   sum=Neyron.sum;
		       vyhod=Neyron.vyhod;
			   vhod_size = Neyron.vhod_size;
			      // delete[] vhod;
			   vhod=new double[vhod_size];
			   // delete[] weights;
			  weights=new double [vhod_size+1];
		for (int i=0; i<vhod_size; i++)
		{
		vhod[i]=Neyron.vhod[i]; 
		weights[i]=Neyron.weights[i];
		} 
		weights[vhod_size]=Neyron.weights[vhod_size];
		}
		
		return *this;
    } 
   Neuron::Neuron(const Neuron &Neyron)
   {
	    vhod_size = Neyron.vhod_size;
		vhod=new double[vhod_size];
		weights=new double [vhod_size+1];
		for (int i=0; i<vhod_size; i++)
		{
		vhod[i]=Neyron.vhod[i]; 
		weights[i]=Neyron.weights[i];
		} 
		weights[vhod_size]=Neyron.weights[vhod_size];
		sum=Neyron.sum;
		vyhod=Neyron.vyhod;
   }

   void Neuron::Def_Neuron()
   {   
	   //double ves;
	   //cout<<"Enter weights 1*"<<vhod_size<<'\n';//веса
	   //for (int i=0; i<vhod_size; i++)
	   //{   
		  // cin>>ves;
		  // weights[i]=ves;
		  //// cout<<weights[i]<<'\n';
	   //}
	   // сумма
	  set_sum();
	  set_vyhod();
	  //show();
   }
   

void Neuron::show()
{
	cout<<"vhod_size: "<<vhod_size<<'\n';
	cout<<"Vhod: ";
	for (int i=0; i<vhod_size; i++)
	cout<<vhod[i]<<'\t';
	cout<<'\n';
	cout<<"Weights: ";
	for (int i=0; i<vhod_size; i++)
	cout<<weights[i]<<'\t';
	cout<<'\n';
	cout<<"Summa: "<<sum<<'\n';
	cout<<"Vyhod: "<<vyhod<<'\n'; 

} 
void Neuron::set_sum()
	{ 
		double s, S=0;
	for (int i=0; i<vhod_size; i++)
	{
		s=vhod[i]*weights[i];
		S=S+s;
	}
	sum=S+weights[vhod_size];
    
	}


void Neuron::set_vyhod()
	{
       vyhod=FuncSigmoid(sum);
	}
int Neuron::Vhod_Size()
{
	return vhod_size;
}

//======класс Neuon_BP
Neuron_BP::Neuron_BP()
{

}
Neuron_BP::Neuron_BP(const Neuron& Neyron)
	      :Neuron(Neyron)
{
	dw=new double[vhod_size+1];
	for(int i=0;i<vhod_size+1; i++)
       { dw[i]=0;	}
}

Neuron_BP::~Neuron_BP()
{
	delete[] dw; 
}
Neuron_BP& Neuron_BP::operator=(const Neuron_BP &Neyron) 
   {
        //проверка на самоприсваивание
        if (this != &Neyron) 
		{
			   sum=Neyron.sum;
		       vyhod=Neyron.vyhod;
			   vhod_size = Neyron.vhod_size;
			    //delete[] vhod; 
			   vhod=new double[vhod_size];
			    //delete[] weights;
			  weights=new double [vhod_size+1];
		for (int i=0; i<vhod_size; i++)
		{
		vhod[i]=Neyron.vhod[i]; 
		weights[i]=Neyron.weights[i];
		} 
		weights[vhod_size]=Neyron.weights[vhod_size];
		
		//delete[] dw;
		dw=new double[vhod_size+1];
	for(int i=0;i<vhod_size; i++)
        dw[i]=Neyron.dw[i]; 
		}

		dw[vhod_size]=Neyron.dw[vhod_size];
		return *this;
    } 
void Neuron_BP::BP_Update(const Neuron& Neyron)
{
	for (int i=0; i<vhod_size; i++)
		{
		vhod[i]=Neyron.vhod[i]; 
		weights[i]=Neyron.weights[i];
		} 
	    weights[vhod_size]=Neyron.weights[vhod_size];
		sum=Neyron.sum;
		vyhod=Neyron.vyhod;
}