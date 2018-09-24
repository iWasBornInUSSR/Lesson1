#include "iostream"
#include "arrayRealisation.h"
#include "consts.h"
using namespace std;
void doTaskWithArray(const char *arrA, const char *arrB, const char *arrC, const char *arrD)
{
    char arrE[size] = {0};
    int dynamicSize = 0;
    char input;
    int flag;
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
   /* cout << "arrayRealisation:" << endl;
    for (int k = 0;arrE[k]; ++k) {
        cout << arrE[k] << " ";
    }
    cout << endl;*/

}