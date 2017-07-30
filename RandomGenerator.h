#pragma once

#include "stdafx.h"

using namespace std;

 

class RandomGenerator

{

private:

    int n;

    int* x;

public:

    RandomGenerator(int);

    int getSize(void);

    int* GetRandom(int, int);

    int* GetPartSorted(unsigned int, unsigned int);

    int GetOneRandom(int, int);

public:

    ~RandomGenerator(void);

};