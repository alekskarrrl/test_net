//#include <stdlib.h>
//#include <math.h>
//#include <fstream>
//#include "neuron.h"
//#include "layer.h"
//#include "net.h"
#include "stdafx.h"

using namespace std;

Layer::Layer() // конструктор по умолчанию
{
} 

Layer::Layer(int num_inp, int Lsize) //конструктор
{ 
	layer_size=Lsize;
    vxod_size=num_inp;
	sloy=new Neuron[layer_size];
	for (int i=0; i<layer_size; i++)
		sloy[i]=Neuron(vxod_size);
	vxod=new double [vxod_size];
	for (int i=0; i<vxod_size; i++)
		vxod[i]=0; 
	vyxod=new double[layer_size];
	for (int i=0; i<layer_size; i++)
		vyxod[i]=0;
}
Layer::~Layer()  //деструктор
{
	 delete[] sloy; 
	 delete[] vxod; 
	delete[] vyxod; 
}

Layer& Layer::operator=(const Layer &sloi) 
   {
        //проверка на самоприсваивание
        if (this == &sloi) 
		  return *this;  
		layer_size=sloi.layer_size;
		vxod_size=sloi.vxod_size;
		    //  delete[] vxod;  // !!!!!!!
			vxod=new double[vxod_size];
		     for(int i=0; i<vxod_size; i++)
		         vxod[i]=sloi.vxod[i];
			      //  delete[] sloy;  //!!!!!!!
			 sloy=new Neuron[layer_size];
			 for (int i=0; i<layer_size; i++)
				 sloy[i]=sloi.sloy[i];
			 //delete[] vyxod;  //!!!!!!!!
			 vyxod=new double[layer_size];
		     for(int i=0; i<layer_size; i++)
		         vyxod[i]=sloi.vyxod[i];        
        return *this;
    } 

Layer::Layer(const Layer &sloi)
{
	layer_size=sloi.layer_size;
		vxod_size=sloi.vxod_size;
		vxod=new double[vxod_size];
		     for(int i=0; i<vxod_size; i++)
		         vxod[i]=sloi.vxod[i];
			 sloy=NULL;
			 /*sloy=new Neuron[layer_size];
			 for (int i=0; i<layer_size; i++)
				 sloy[i]=sloi.sloy[i]; */
			 vyxod=new double[layer_size];
		     for(int i=0; i<layer_size; i++)
		         vyxod[i]=sloi.vyxod[i];
			 
}
Neuron& Layer::operator[](int i)
{
	return sloy[i];
}

void Layer::Def_lay()
{
	for (int i=0; i<layer_size; i++)
		{   //cout<<"neuron number "<<i+1<<'\n';
	         for (int j=0; j<vxod_size; j++)
			sloy[i].vhod[j]=vxod[j];// определить вход на нейрон
	sloy[i].Def_Neuron();
	vyxod[i]=sloy[i].vyhod;
	}
	//Show_lay();

}
 void Layer::Show_lay()
 {
	 cout<<"layer size: "<<layer_size<<'\n';
	 cout<<"layer vxod: ";
	 for (int i=0; i<vxod_size; i++)
	 cout<<vxod[i]<<'\t';
	 cout<<"\n Layer vyxod: ";
	 for (int i=0; i<layer_size; i++)
	 cout<<vyxod[i]<<'\t';
	 cout<<'\n';
 }
  void Layer_BP::Show_lay()
 {
	 cout<<"layer size: "<<layer_size<<'\n';
	 cout<<"layer vxod: ";
	 for (int i=0; i<vxod_size; i++)
	 cout<<vxod[i]<<'\t';
	 cout<<"\n Layer vyxod: ";
	 for (int i=0; i<layer_size; i++)
	 cout<<vyxod[i]<<'\t';
	 cout<<'\n';
	 cout<<"Delta: ";
	 for (int i=0; i<layer_size; i++)
	 cout<<delta[i]<<'\t';
	 cout<<'\n';
 }



void Layer::Set_neyron_vhod()
{
	for (int i=0; i<layer_size; i++)
		for (int j=0; j<vxod_size; i++)
			sloy[i].vhod[j]=vxod[j];
}
//========класс Layer_BP
Layer_BP& Layer_BP::operator=(const Layer_BP &sloi) 
   {
        //проверка на самоприсваивание
        if (this != &sloi) 
		{   
		layer_size=sloi.layer_size;
		vxod_size=sloi.vxod_size;
		          // delete[] vxod;  //
			vxod=new double[vxod_size];
		     for(int i=0; i<vxod_size; i++)
		         vxod[i]=sloi.vxod[i];
			 sloy=NULL;
			  //  delete[] sloy;  //
			 sloy2=new Neuron_BP[layer_size];
			 for (int i=0; i<layer_size; i++)
				 sloy2[i]=sloi.sloy2[i];
			// delete[] vyxod; //
			 vyxod=new double[layer_size];
		     for(int i=0; i<layer_size; i++)
		         vyxod[i]=sloi.vyxod[i];
			//delete[] delta;  //
			 delta=new double[layer_size];
	for (int i=0; i<layer_size;i++)
		delta[i]=sloi.delta[i];
		}
			 
        return *this;
    } 
Layer_BP::Layer_BP(const Layer& sloi)
	     :Layer(sloi)
{
	sloy=NULL;
	sloy2=new Neuron_BP[layer_size];
	
	delta=new double[layer_size];
	for (int i=0; i<layer_size; i++)
		{sloy2[i]=Neuron_BP(sloi.sloy[i]); 
	     delta[i]=0;
	/*cout<<"Neyron number "<<i<<'\n'; 
	cout<<"delta="<<delta[i]<<'\t';*/
	}
}

Layer_BP::~Layer_BP()
{
	delete[] delta; 
	delete[] sloy2;
}
double Layer_BP::D_Sigm(int j)
{
		
	return sloy2[j].D_Sigmoid(sloy2[j].vyhod);
}

double Layer_BP::W_delta(int k)
{
	double S, s;
	S=0;
	for (int i=0; i<layer_size; i++)
		{
			s=sloy2[i].weights[k]*delta[i];
	        S=S+s;
	}
	return S;
}
void Layer_BP::BP_Update(const Layer& sloi)
{
	for(int i=0; i<vxod_size; i++)
		         vxod[i]=sloi.vxod[i];
			 for(int i=0; i<layer_size; i++)
		         vyxod[i]=sloi.vyxod[i];
			 for (int i=0; i<layer_size; i++)
				 sloy2[i].BP_Update(sloi.sloy[i]);

}