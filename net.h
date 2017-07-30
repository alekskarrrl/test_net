//#include <stdlib.h>
//#include <fstream>
//#include <iostream>
//#include <math.h>
//#include <stdio.h>
//#include "layer.h"
//#include "neuron.h"
#include "stdafx.h"

#ifndef _NET_H_
#define _NET_H_

 class MyNet
{
private:
	
	int num_inputs;
	double* net_vxod;
	double* net_vyxod;
	int net_size;
	int* layers_size;
	Layer* NET;
	
public:
	friend class Layer;
	friend class Neuron;
	friend class Net_BP;
	
	MyNet(int num_inp, int Nlayers, int *LS); //конструктор
	MyNet();       //конструктор по умолчанию
	virtual ~MyNet();     //деструктор
	MyNet& operator=(const MyNet &net);
	MyNet(const MyNet &net);
	virtual Layer& operator[](int i);
	virtual void Show();
	void Get_vxod();
	void Set_size();
	void Set_input_size();
	//friend void Layer::Set_vxod();
	void Set_vxod();
	void Def_Net();
	void Set_layer_vxod();
	void Plus_dw(const Net_BP &net);
	void set_weights(int* mas);
	void Get_vxod(int k, int N);
	double Vyxod(int i);
	int Num(int i);
	//void New_weights(double *vesa);
	void Get_Weights();
	void In_Weights();
	double Ret_Weights(int i, int j, int k);
	int L_Vhod_size(int i);
	void In_Vector();
	void FF_Vyxod();
	void FF_Vxod(int k, int N);
	
		
};
class Net_BP: public MyNet
{
private:
Layer_BP* NET2;
double* d;

public:
friend class Layer_BP;
Net_BP(const MyNet& net);
virtual ~Net_BP();
Net_BP();
Net_BP& operator=(const Net_BP &net);
void Calc_delta();
virtual void Show();
void Calc_dw();
const double Func(int i, int j, int q) const;
void BP_Update(const MyNet& net);
double Error();

void Get_Obrazec(int k, int N);
};
void Out_Error(double error);
void Clear_Error();
void Clear_2();
void Vector(char vect);
void ParamMiu(double mmt);
void ParamEta(double eta);
#endif