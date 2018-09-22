//
// Created by peeknick on 22.09.18.
//

#include <cstdlib>
#include <ctime>
#include <iostream>
#include "testGenerator.h"
using namespace std;
/*int main()
{   const int size = 10;
    const int alphabet = 26;
    char arrE[size] = {0};
    int wE = generateTestBynary(alphabet, size);
    //convert machine word to array of char
    for (int i = 0, k = 0;i < alphabet;++i)
        if(wE & (1 << i))
            arrE[k++] = i + 'A';
    //-------------------------
 //   generateTestArray(26,5,arrE);
    cout << arrE << endl;
}*/
//! attention bad code
int generateTestBynary(int alphabet, int size)
{   srand(time(nullptr));
    int w = 0;
    for (int i = 0, k = 0; i < alphabet; ++i) {
        if (rand() % 2) {
            w = w | ((rand() % 2) << i);
            k++;
        }
        if(k == size) break;
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
