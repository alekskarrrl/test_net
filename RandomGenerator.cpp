
#include "stdafx.h"
RandomGenerator::RandomGenerator(int size) {

    this->n = size;

    this->x = new int[ this->n ];

}

 

// ѕолучает массив из n случайных чисел от left до right

int* RandomGenerator::GetRandom(int left, int right) {

 

    for (int i = 0; i < this->n; i++) {

        this->x[i] = this->GetOneRandom(left, right);

    }

    return this->x;

}

 

 

// ѕолучение 1-го случайного числа от left до right

int RandomGenerator::GetOneRandom(int left, int right) {

    return (left + rand() % (right - left));

}

 

/* ѕолучение частично-отсортированной последовательности

 *  отора€ будет состо€ть из чередующихс€ между собой отрезков

 * сортированных последовательностей длинной sortedLength элементов

 * и неотсортированных, случайных последовательностей числей,

 * длинной unsortedLength элементов

 */

int* RandomGenerator::GetPartSorted(unsigned int unsortedLength, unsigned int sortedLength) {

    bool sorted = true;

    int  numerator      = 20;

    int  intervalLength = 0;

    for (int i = 0; i < this->n; i++) {

        if (sorted) {

 

            numerator += 2;

            this->x[i] = numerator;

            if (++intervalLength == sortedLength) {

                sorted = false;

                intervalLength = 0;

            }

        } else {

            this->x[i] = this->GetOneRandom(0, this->n);

            numerator  = this->x[i];

 

            if (++intervalLength == unsortedLength) {

                sorted = true;

                intervalLength = 0;

            }

        }

    }

 

    return this->x;

}

 

 

 

int RandomGenerator::getSize(void) {

    return this->n;

}

 

RandomGenerator::~RandomGenerator(void) {

    delete [] this->x;

}

 