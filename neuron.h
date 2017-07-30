//#include <stdlib.h>
//#include <fstream>
//#include <iostream>
//#include <math.h>
//#include <stdio.h>

#include "stdafx.h"

#define ORIGINAL  0     // типы активационных функций
#define HYPERTAN  1

#ifndef _NEURON_H_
#define _NEURON_H_

class Neuron
{
private:
	//int rang;
	double* weights;
	double* vhod;
	int vhod_size;
	double sum;
	double vyhod;
	
public:
	//....конструктор+деструктор

	friend class Layer;
	friend class Neuron_BP;
	friend class Layer_BP;
	friend class Net_BP;
	friend class MyNet;
	friend void SigmType(bool ST);
	friend void ParamAlfa(double alfa);
	friend void ParamAB(double a, double b);
	double FuncSigmoid(double sum);
	Neuron(int inp_num);
	Neuron();
	virtual ~Neuron();
	virtual void show();
	void set_sum();
	void set_weights();
	void set_vyhod();
	//friend void test(int num);
	Neuron& operator=(const Neuron &Neyron);
	Neuron(const Neuron &Neyron);
	void Def_Neuron();
	virtual int Vhod_Size();
};
class Neuron_BP: public Neuron
{
private:
double* dw;
public:
	Neuron_BP(const Neuron& Neyron);
	virtual ~Neuron_BP();
	Neuron_BP();
	Neuron_BP& operator=(const Neuron_BP &Neyron);
	friend class Layer_BP;
	friend class Net_BP;
	double D_Sigmoid(double vyhod);
	void BP_Update(const Neuron& Neyron);
};

#endif