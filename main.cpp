#include <iostream>
#include <ctime>
#include "binaryWord.h"
#include "Lists.h"
#include "testGenerator.h"
#include "arrayRealisation.h"
#include "consts.h"
using namespace std;
int main() {
    char arrA[size] = {0};
    char arrB[size] = {0};
    char arrC[size] = {0};
    char arrD[size] = {0};
    int wA = 0,wB = 0,wC = 0,wD = 0;
    // init multiplicity
    srand(time(nullptr));
    wA =  generateTestBynary(alphabet,size/2);
    wB =  generateTestBynary(alphabet,size/2);
    wC =  generateTestBynary(alphabet,size/2);
    wD =  generateTestBynary(alphabet,size/2);
    for (int i = 0, k = 0;i < sizeof(int) *8 - 1;++i)
        if(wA & (1 << i))
            arrA[k++] = i + 'A';
    for (int i = 0, k = 0;i < sizeof(int) *8 - 1;++i)
        if(wB & (1 << i))
            arrB[k++] = i + 'A';
    for (int i = 0, k = 0;i < sizeof(int) *8 - 1;++i)
        if(wC & (1 << i))
            arrC[k++] = i + 'A';
    for (int i = 0, k = 0;i < sizeof(int) *8 - 1;++i)
        if(wD & (1 << i))
            arrD[k++] = i + 'A';
    //arrA:GH arrB:ACLN arrC:D arrD:A
    cout << "arrA:" << arrA << " arrB:" << arrB << " arrC:" << arrC << " arrD:" << arrD << endl;
    doTaskWithArray(arrA, arrB, arrC, arrD);
    taskWithWord(wA, wB, wC, wD);
    doTaskWithLists(arrA, arrB, arrC, arrD);

    return 0;

}