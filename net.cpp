//#include <stdlib.h>
//#include <math.h>
//#include <fstream>
//#include "neuron.h"
//#include "layer.h"
//#include "net.h"
#include "stdafx.h"
using namespace std;

static double Eta=1;
static double Miu=1;

void ParamEta(double eta)
{
	Eta=eta;
}
void ParamMiu(double mmt)
{
	Miu=mmt;
}

MyNet::MyNet(int num_inp, int Nlayers, int *LS)
{ 
	//cout<<"Net Konstr!\n";
	num_inputs=num_inp;
	net_size=Nlayers;
	net_vxod=new double [num_inputs];
 for (int i=0; i<num_inputs; i++)
	 net_vxod[i]=0; 
    layers_size=new int [net_size];
	//cout<<"Enter layers sizes: \n";
	for (int i=0; i<net_size; i++)
		{
			layers_size[i]=LS[i];
			//cin>>layers_size[i];
	//cout<<layers_size[i]<<'\t';
	    }
		//cout<<'\n';
	NET=new Layer[net_size];
	NET[0]=Layer(num_inputs, layers_size[0]);
for (int i=1; i<net_size; i++)
NET[i]=Layer(layers_size[i-1], layers_size[i]);
net_vyxod=new double[layers_size[net_size-1]];
for (int i=0; i<layers_size[net_size-1]; i++)
	net_vyxod[i]=0;
 
}

MyNet::MyNet()
{

}
MyNet::~MyNet()
{
	delete[] NET;
	delete[] net_vxod; 
	delete[] layers_size; 
	delete[] net_vyxod;
	  
}

MyNet& MyNet::operator=(const MyNet &net) 
   {
        //проверка на самоприсваивание
        if (this == &net) 
			return *this;
		       num_inputs=net.num_inputs;
			   net_size=net.net_size;
			   delete[] net_vxod;
			  net_vxod=new double[num_inputs];
		for(int i=0; i<num_inputs; i++)
		net_vxod[i]=net.net_vxod[i]; 
		delete[] layers_size;
		layers_size=new int [net_size];
		for(int i=0; i<net_size; i++)
		layers_size[i]=net.layers_size[i];
		// delete[] NET;   //
		NET=new Layer[net_size];
		for (int i=0; i<net_size; i++)
			NET[i]=net.NET[i];
		  
        return *this;
    } 
MyNet::MyNet(const MyNet &net)

{
	num_inputs=net.num_inputs;
	net_size=net.net_size;
	net_vxod=new double[num_inputs];
		for(int i=0; i<num_inputs; i++)
		net_vxod[i]=net.net_vxod[i]; 
	layers_size=new int[net_size];
		for(int i=0; i<net_size; i++)
		layers_size[i]=net.layers_size[i];
		NET=NULL;
	/* NET=new Layer[net_size];
		for (int i=0; i<net_size; i++)
			NET[i]=net.NET[i];*/
	net_vyxod=new double[layers_size[net_size-1]];
for (int i=0; i<layers_size[net_size-1]; i++)
	net_vyxod[i]=net.net_vyxod[i];
	
}
Layer& MyNet::operator[](int i)
{
	return NET[i];
}


void MyNet::set_weights(int* mas)// установить начальные веса(одинаковые)
{  
	int num=0;
	
	//cout<<"Enter weights for begin: \n";
	for (int i=0; i<net_size; i++)
		for (int j=0; j<NET[i].layer_size; j++)
			for (int q=0; q<NET[i].sloy[j].vhod_size+1; q++)
			{
				num++;
				NET[i].sloy[j].weights[q]=mas[num-1]/100;
			}
}
int MyNet::Num(int i)
{
	int g=0, G;
					for (int k=0; k<i; k++)
                     for (int j=0; j<NET[k].layer_size; j++)
			            for (int q=0; q<NET[k].sloy[j].vhod_size; q++)
						{
					G=NET[k].layer_size*NET[k].sloy[j].vhod_size;
					g=g+G;
						}
						return g;
}
void MyNet::Get_Weights() // вывод весов в файл
{
	ofstream outweights("weights.txt");
	              for (int i=0; i<net_size; i++)
				  {
                     for (int j=0; j<NET[i].layer_size; j++)
					 {
			            for (int k=0; k<NET[i].sloy[j].vhod_size+1; k++)
							{
								outweights<<NET[i].sloy[j].weights[k]<<'\t';
						    }
						outweights<<'\n';
					 }
					 outweights<<'\n';
				  }

}

void MyNet::In_Weights()
{
	ifstream inweights("weights.txt");
	for (int i=0; i<net_size; i++)
		for (int j=0; j<NET[i].layer_size; j++)
			 for (int k=0; k<NET[i].sloy[j].vhod_size+1; k++)
				 inweights>>NET[i].sloy[j].weights[k];
}
double MyNet::Ret_Weights(int i, int j, int k)
{
	return NET[i].sloy[j].weights[k];
}
int MyNet::L_Vhod_size(int i)
{
	return NET[i].vxod_size;
}

void MyNet::Def_Net()
{	
	//======
	//cout<<"Net vxod: \n";
	for (int i=0; i<num_inputs; i++)
	{NET[0].vxod[i]=net_vxod[i];
	//cout<<NET[0].vxod[i]<<'\t';
	}
	//cout<<'\n';
	//cout<<"Layer number 1: \n";
	NET[0].Def_lay();
	
	for (int i=1; i<net_size; i++)
		{
			//cout<<"Layer number "<<i+1<<'\n';
			for (int j=0; j<NET[i-1].layer_size; j++)
   { 
	   NET[i].vxod[j]=NET[i-1].vyxod[j];
	//cout<<NET[i].vxod[j]<<'\t';
			}
	NET[i].Def_lay();
	}
	for (int i=0; i<NET[net_size-1].layer_size; i++)
		net_vyxod[i]=NET[net_size-1].vyxod[i];
}
double MyNet::Vyxod(int i)
{
	return net_vyxod[i];
}
void MyNet::Show()
{
	cout<<"num_inputs: "<<num_inputs<<'\n';
	cout<<"net_size: "<<net_size<<'\n';
	cout<<"layers_size: "<<'\n';
	for (int i=0; i<net_size;i++)
		cout<<layers_size[i]<<'\t';
	cout<<'\n';
	cout<<"net_vyxod: "<<'\n';
	for (int i=0; i<NET[net_size-1].layer_size; i++)
		cout<<net_vyxod[i]<<'\t';
	cout<<'\n';
	cout<<"SHOW LAY: ";
	for (int i=0; i<net_size;i++)
	NET[i].Show_lay();

	
}
void Net_BP::Show()
{
	cout<<"num_inputs: "<<num_inputs<<'\n';
	cout<<"net_size: "<<net_size<<'\n';
	cout<<"layers_size: "<<'\n';
	for (int i=0; i<net_size;i++)
		cout<<layers_size[i]<<'\t';
	cout<<'\n';
	cout<<"net_vyxod: "<<'\n';
	for (int i=0; i<NET2[net_size-1].layer_size; i++)
		cout<<net_vyxod[i]<<'\t';
	cout<<'\n';
	cout<<"SHOW LAY_BP: ";
	for (int i=0; i<net_size;i++)
	NET2[i].Show_lay();

	
}


void MyNet::Get_vxod()   //читаем вход из файла и записываем в массив vxod
{
	double number;
ifstream infile("vxod.txt");
if (!infile)
	cout<<"Error!";
for (int i=0; i<num_inputs;i++)
	{
		infile>>number;
net_vxod[i]=number;
	
//cout<<net_vxod[i]<<'\t';
}
cout<<'\n';
}
   
void MyNet::Set_layer_vxod()
{ 
	for (int i=0; i<num_inputs; i++)
        NET[0].vxod[i]=net_vxod[i]; 
	for (int j=1; j<net_size; j++)
		for (int i=0; i<NET[j-1].layer_size; i++)
			{
			NET[j].vxod[i]=NET[j-1].vyxod[i];
		    }
}

void MyNet::Plus_dw(const Net_BP &net)
{
	for (int i=0; i<net_size; i++)
		for (int j=0; j<NET[i].layer_size; j++)
			for (int q=0; q<NET[i].sloy[j].vhod_size+1; q++)
				{
					//NET[i].sloy[j].weights[q]=NET[i].sloy[j].weights[q]+Miu*
					NET[i].sloy[j].weights[q]=NET[i].sloy[j].weights[q]+net.Func(i, j, q);
	//cout<<NET[i].sloy[j].weights[q]<<'\t';
	}
}

void MyNet::Get_vxod(int k, int N)// для обучения
{
	double* a=new double[num_inputs*N];
	//FILE* iVxod;
	//iVxod= fopen ("vxod.txt", "rb");
	//fseek (iVxod, num_inputs*k, SEEK_SET);
	ifstream iVxod("vxod.txt");
	for (int i=0; i<num_inputs*N; i++)
		{
			iVxod>>a[i];
			
			//iVxod>>net_vxod[i];
	    
	    }
	for (int i=0; i<num_inputs; i++)
	net_vxod[i]=a[num_inputs*k+i];
}

void MyNet::FF_Vxod(int k, int N)
{
	double* a=new double[num_inputs*N];
	//FILE* iVxod;
	//iVxod= fopen ("vxod.txt", "rb");
	//fseek (iVxod, num_inputs*k, SEEK_SET);
	ifstream FF_in("1.txt");
	for (int i=0; i<num_inputs*N; i++)
		{
			FF_in>>a[i];
			
			//iVxod>>net_vxod[i];
	    
	    }
	for (int i=0; i<num_inputs; i++)
	net_vxod[i]=a[num_inputs*k+i];
}


//===класс Net_BP
void Net_BP::Get_Obrazec(int k, int N)
{
	double* a=new double[NET2[net_size-1].layer_size*N];
	ifstream iObr("obrazec.txt");
	for (int i=0; i<N*NET2[net_size-1].layer_size; i++)
		{
			iObr>>a[i];
	    }
	for (int i=0; i<NET2[net_size-1].layer_size; i++)
	d[i]=a[NET2[net_size-1].layer_size*k+i];
}

Net_BP::Net_BP() 
{
}
Net_BP& Net_BP::operator=(const Net_BP &net)
	{
        //проверка на самоприсваивание
        if (this != &net) 
		{		
		       num_inputs=net.num_inputs;
			   net_size=net.net_size;
			   delete[] net_vxod;
			  net_vxod=new double[num_inputs];
		for(int i=0; i<num_inputs; i++)
		net_vxod[i]=net.net_vxod[i]; 
		delete[] layers_size;
		layers_size=new int [net_size];
		for(int i=0; i<net_size; i++)
		layers_size[i]=net.layers_size[i];
		 //   delete[] NET2;
		NET=NULL;
		NET2=new Layer_BP[net_size];
		for (int i=0; i<net_size; i++) 
			NET2[i]=net.NET2[i];
		delete [] d;
		d=new double[NET2[net_size-1].layer_size];
	for (int i=0; i<NET2[net_size-1].layer_size; i++)
		d[i]=net.d[i];
		}
  
        return *this;
    } 

Net_BP::Net_BP(const MyNet &net)
	   :MyNet(net)
{
	NET=NULL;
	NET2=new Layer_BP[net_size];
	//cout<<"sloy number 0 \n";
	NET2[0]=Layer_BP(net.NET[0]);
	
for (int j=1; j<net_size; j++)
{
	//cout<<"sloy number "<<j<<'\n';
	NET2[j]=Layer_BP(net.NET[j]); 
}

	d=new double[layers_size[net_size-1]];
	for (int i=0; i<layers_size[net_size-1]; i++)
		d[i]=0;
}
Net_BP::~Net_BP()
{
	  delete [] d;
	  delete [] NET2;
}
void Net_BP::Calc_delta()
{ 
    for (int i=0; i<NET2[net_size-1].layer_size; i++)
	{
		NET2[net_size-1].delta[i]=NET2[net_size-1].D_Sigm(i)*(d[i]-NET2[net_size-1].vyxod[i]);
		cout<<NET2[net_size-1].delta[i]<<'\n';
	}
	
	// дельта получается 0 во всех кроме последнего слоя
	for (int j=net_size-2; j>=0; j--)
	 for (int i=0; i<NET2[j].layer_size; i++)
	 {
		NET2[j].delta[i]=NET2[j].D_Sigm(i)*NET2[j+1].W_delta(i);
		cout<<NET2[j].delta[i]<<'\n';
	 }
	//======================================================
} 
void Net_BP::Calc_dw()
{
	for (int i=net_size-1; i>0; i--)
		for (int j=0; j<NET2[i].layer_size; j++)
			for (int q=0; q<NET2[i].sloy2[j].vhod_size; q++)
		{
			NET2[i].sloy2[j].dw[q]=Miu*NET2[i].sloy2[j].dw[q]+Eta*NET2[i].delta[j]*NET2[i-1].vyxod[q];
			NET2[i].sloy2[j].dw[q+1]=Miu*NET2[i].sloy2[j].dw[q]+Eta*NET2[i].delta[j]*1;
			//NET2[i].sloy2[j].dw[q]=Eta*NET2[i].delta[j]*NET2[i-1].vyxod[q];
			//NET2[i].sloy2[j].dw[q]=-Eta*(Miu*NET2[i].sloy2[j].dw[q]+(1-Miu)*NET2[i].delta[j]*NET2[i-1].vyxod[q]);
		    cout<<"DW: "<<NET2[i].sloy2[j].dw[q]<<'\t';
		}
     for (int j=0; j<NET2[0].layer_size; j++)
			for (int q=0; q<num_inputs; q++)
		{
			NET2[0].sloy2[j].dw[q]=Miu*NET2[0].sloy2[j].dw[q]+Eta*NET2[0].delta[j]*net_vxod[q];
			NET2[0].sloy2[j].dw[q+1]=Miu*NET2[0].sloy2[j].dw[q]+Eta*NET2[0].delta[j]*1;
			//NET2[0].sloy2[j].dw[q]=Eta*NET2[0].delta[j]*net_vxod[q];
			//NET2[0].sloy2[j].dw[q]=-Eta*(Miu*NET2[0].sloy2[j].dw[q]+(1-Miu)*NET2[0].delta[j]*net_vxod[q]);
		    cout<<"DW: "<<NET2[0].sloy2[j].dw[q]<<'\t';
		}
}
const double Net_BP::Func(int i, int j, int q) const
{
	return NET2[i].sloy2[j].dw[q];
}
void Net_BP::BP_Update(const MyNet& net)
{ 
	/*num_inputs=net.num_inputs;
	net_size=net.net_size;*/
	//net_vxod=new double[num_inputs];
		for(int i=0; i<num_inputs; i++)
		net_vxod[i]=net.net_vxod[i]; 
	//layers_size=new int[net_size];
		/*for(int i=0; i<net_size; i++)
		layers_size[i]=net.layers_size[i];*/
		//NET=NULL;
	/* NET=new Layer[net_size];
		for (int i=0; i<net_size; i++)
			NET[i]=net.NET[i];*/
	//net_vyxod=new double[layers_size[net_size-1]];
for (int i=0; i<layers_size[net_size-1]; i++)
	net_vyxod[i]=net.net_vyxod[i];


	/*for (int i=0; i<net_size; i++)
		for (int j=0; j<NET2[i].layer_size; j++)
			for (int q=0; q<NET2[i].sloy2[j].vhod_size; q++)
				{
					NET2[i].sloy2[j].weights[q]=net.NET[i].sloy[j].weights[q];
	       
			    }*/
	
for (int j=0; j<net_size; j++)
{
	//cout<<"sloy number "<<j<<'\n';
	NET2[j].BP_Update(net.NET[j]); 
}

}

double Net_BP::Error()
{
	double e, E=0, Error;
	for (int i=0; i<NET2[net_size-1].layer_size; i++)
	{
		e=((d[i]-NET2[net_size-1].vyxod[i])*(d[i]-NET2[net_size-1].vyxod[i]))/2;
	   E=E+e;
	}
	Error=E/NET2[net_size-1].layer_size;
	//cout<<"Error="<<Error<<'\n';
	return Error;
	
}
void Out_Error(double error)
{
	ofstream oError("error.txt", ios_base::out|ios_base::app);
    oError<<error<<'\n';
}
void MyNet::FF_Vyxod()
{
ofstream FF_out("2.txt", ios_base::out|ios_base::app);
   for (int i=0; i<NET[net_size-1].layer_size; i++)

      FF_out<<net_vyxod[i]<<'\t';
   FF_out<<'\n';
}

void Clear_Error()
{
	ofstream oError("error.txt", ios_base::out|ios_base::trunc);
}
void Clear_2()
{
	ofstream FF_out("2.txt", ios_base::out|ios_base::trunc);
}


void MyNet::In_Vector()
{
	ifstream vector("vector.txt", ios_base::in);
	for (int i=0; i<num_inputs; i++)
		vector>>net_vxod[i];
}