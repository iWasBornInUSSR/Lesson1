//
// Created by peeknick on 10.09.18.
//
#include "binaryWord.h"
int taskWithWord() {
    const int size = 10;
    char arrA[size] = {'A','U','L','P','Q'};
    char arrB[size] = {'U','I','V','X','Q'};
    char arrC[size] = {'Z','W','E','M','J'};
    char arrD[size] = {'L','U','Z','M','K'};
    char arrE[size] = {0};
    int wA = 0,wB = 0,wC = 0,wD = 0, wE = 0;
    // init multiplicity
    for (int i = 0;arrA[i]; ++i) wA |= (1 << arrA[i] - 'A');
    for (int i = 0;arrB[i]; ++i) wB |= (1 << arrB[i] - 'A');
    for (int i = 0;arrC[i]; ++i) wC |= (1 << arrC[i] - 'A');
    for (int i = 0;arrD[i]; ++i) wD |= (1 << arrD[i] - 'A');
    for (int i = 0;arrE[i]; ++i) wE |= (1 << arrE[i] - 'A');
    //cout << wA << " " << wB << " " << wC << " " << wD << " " << endl;

    // E = A\B\C || D
    wE = bitOperatorOR(((wA & bitOperatorNOT(wB)) & bitOperatorNOT(wC) ), wD );

    //convert machine word to array of char
    for (int i = 0, k = 0;i < sizeof(int) *8 - 1;++i)
        if(wE & (1 << i))
            arrE[k++] = i + 'A';
    //-------------------------
    cout << arrE << endl;
    return 0;
}
int bitOperatorNOT(int source) {
    for (int i = 0; i < sizeof(int) * 8 - 1; ++i) {
        source = source ^ (1 << i);
    }
    return  source;
}
int bitOperatorOR(int first , int second) {
    int result = 0;
    for (int i = 0; i < sizeof(int) * 8 - 1; ++i) {
        result += pow(2,i) * ((first & (1 << i) ? 1 : 0) || (second & (1 << i)) ? 1 : 0); // maybe bad code
        //! !!! pow - expensive operation
    }
    return result;
}
// func to show bin representation of a number
string bin(int k, size_t size)
{

    size_t i;
    string performance;
    bool isNegative = k < 0;
    k = abs(k);
    for (i = size * 8; i > 0; --i)
    {
        performance += ((k & (1 << (i-1)) ? 1 : 0) + '0');
    }
    if(isNegative)
        performance[0] = '1';
    cout << performance << endl;
    return  performance;
}