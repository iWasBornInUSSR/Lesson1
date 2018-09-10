#include <iostream>
#include <vector>
#include "binaryWord.h"
using namespace std;
int main() {
    const int size = 10;
    int dynamicSize = 0;
    char input;
    int flag;
    char arrA[size] = {'A','U','L','P','Q'};
    char arrB[size] = {'U','I','V','X','Q'};
    char arrC[size] = {'Z','W','E','M','J'};
    char arrD[size] = {'L','U','Z','M','K'};
    char arrE[size] = {0};
    //input

  /*  cout << "Input the elements of array A" << endl;
    for (char &i : arrA) {
        cin >> i;
    }
    cout << "Input the elements of array B" << endl;
    for (char &i : arrB) {
        cin >> i;
    }
    cout << "Input the elements of array C" << endl;
    for (char &i : arrC) {
        cin >> i;
    }
    cout << "Input the elements of array D" << endl;
    for (char &i : arrD) {
        cin >> i;
    }*/

    // main part for arrays
    for (int j = 0; j < size; ++j) {
         flag = 1;
        for (int i = 0; i < size; ++i) {
            if(arrA[j] == arrB[i] || arrA[j] == arrC[i]) {
                flag = 0;
                break;
            }
        }
        if(flag) {
            arrE[dynamicSize] = arrA[j];
            dynamicSize++;
        }
    }
    for (int l = 0; l < size; ++l) {
        flag = 1;
        for (int i = 0; i < dynamicSize; ++i) {
            if(arrD[l] == arrE[i]) {
                flag = 0;
                break;
            }
        }
        if(flag) {
            arrE[dynamicSize] = arrD[l];
            dynamicSize++;
        }
    }
    for (int k = 0;arrE[k]; ++k) {
        cout << arrE[k] << " ";
    }
    cout << endl;
    taskWithWord();
    return 0;

}