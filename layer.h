//#include <stdlib.h>
//#include <fstream>
//#include <iostream>
//#include <math.h>
//#include <stdio.h>
//#include "neuron.h"
//#include "net.h"

#include "stdafx.h"
#ifndef _LAYER_H_
#define _LAYER_H_
class Layer
{
private:
	int layer_size; //количество нейронов в слое
	double* vxod;
	double* vyxod;
	int vxod_size;
	Neuron* sloy;
	
public:
	friend class MyNet;
	friend class Neuron;
	friend class Net_BP;
	friend class Layer_BP;
	Layer();
	Layer(int num_inp, int Lsize);
	virtual ~Layer();
	void Set_vxod();
	virtual void Show_lay();
	Layer& operator=(const Layer &sloy);
	virtual Neuron& operator[](int i);
	Layer(const Layer &sloi);
	void Def_lay();
	void Set_vyxod();
	void Set_neyron_vhod();
	void Set_vhod_size();
	
};
class Layer_BP: public Layer
{
private:
	double* delta;
	Neuron_BP* sloy2;
public:
	Layer_BP() {};
	virtual ~Layer_BP();
	Layer_BP(const Layer& sloi);
	Layer_BP& operator=(const Layer_BP &sloi);
	friend class Net_BP;
	virtual void Show_lay();
	double W_delta(int k);
	double D_Sigm(int j);
	void BP_Update(const Layer& sloi);
	
};

#endif
