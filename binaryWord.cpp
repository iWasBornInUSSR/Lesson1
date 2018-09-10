//
// Created by peeknick on 10.09.18.
//
#include "binaryWord.h"
#include <iostream>
#include <vector>
using namespace std;
int taskWithWord() {
    const int size = 10;
    char arrA[size] = {'A','U','L','P','Q'};
    char arrB[size] = {'U','I','V','X','Q'};
    char arrC[size] = {'Z','W','E','M','J'};
    char arrD[size] = {'L','U','Z','M','K'};
    char arrE[size] = {0};
    int wA = 0,wB = 0,wC = 0,wD = 0, wE = 0;
    for (int i = 0;arrA[i]; ++i) wA |=(1 << arrA[i] - 'A');
    for (int i = 0;arrB[i]; ++i) wB |=(1 << arrA[i] - 'A');
    for (int i = 0;arrC[i]; ++i) wC |=(1 << arrA[i] - 'A');
    for (int i = 0;arrD[i]; ++i) wD |=(1 << arrA[i] - 'A');
    for (int i = 0;arrE[i]; ++i) wE |=(1 << arrA[i] - 'A');
    cout << wA << endl;

    return 0;
}

