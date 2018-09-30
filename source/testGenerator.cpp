//
// Created by peeknick on 22.09.18.
//

#include <cstdlib>
#include <iostream>
#include "testGenerator.h"
using namespace std;
//! attention bad code
int generateTestBinary(int alphabet)
{   int w = 0;
    for (int i = 0; i < alphabet; ++i) {
        if (rand() % 2) {
            w = w | ((rand() % 2) << i);
        }
    }
    return  w;
}

/*
void generateTestArray(int universeSize, int subsetSize, char *randomArray) {
    srand(time(nullptr));
    int X[universeSize] = {0};
    for (int i = 0; i < universeSize; ++i) X[i] = i + 1;
    for (int i = 0; i < subsetSize; ++i) {
        int p = rand() % (universeSize - i);
        if (p) Swap ( X[ i + p ], X [ p ] );
    }
    for (int j = 0; j < subsetSize; ++j) {
        randomArray[j] = X[j] + 'A';
    }
}
inline void Swap( int &p, int &q) { int r (p); p = q; q = r;}*/
