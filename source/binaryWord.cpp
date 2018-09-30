//
// Created by peeknick on 10.09.18.
//
#include "binaryWord.h"
#include "consts.h"
int taskWithWord(int wA, int wB, int wC, int wD) {

    // E = A\B\C || D
    char arrE[size] = {0};
    int wE = 0;
    wE = ((wA & ~wB) & ~wC) | wD;
    //convert machine word to array of char
    for (int i = 0, k = 0;i < alphabet - 1;++i)
        if(wE & (1 << i))
            arrE[k++] = i + 'A';
    //-------------------------
    cout << "Binary word realization" << endl;
    for (int k = 0;arrE[k]; ++k) {
        cout << arrE[k] << " ";
    }
    cout << endl;
    return 0;
}
