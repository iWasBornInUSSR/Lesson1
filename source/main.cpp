#include <iostream>
#include <ctime>
#include <fstream>
#include <iomanip>
#include "binaryWord.h"
#include "Lists.h"
#include "testGenerator.h"
#include "arrayRealisation.h"
#include "consts.h"

using namespace std;

int main() {

    const int attemps = 100;
    std::ofstream out("../out.txt");
    //std::streambuf *coutbuf = std::cout.rdbuf(); //save old buf
    std::cout.rdbuf(out.rdbuf()); //redirect std::cout to out.txt!
    srand(time(nullptr));
    //---This block can be add to loop to gen random numbers
    char arrA[size] = {"GH"};
    char arrB[size] = {"ACLN"};
    char arrC[size] = {"D"};
    char arrD[size] = {"A"};
    int wA = 0, wB = 0, wC = 0, wD = 0;
    // init multiplicity
    wA = generateTestBinary(alphabet);
    wB = generateTestBinary(alphabet);
    wC = generateTestBinary(alphabet);
    wD = generateTestBinary(alphabet);
    for (int i = 0, k = 0; i < sizeof(int) * 8 - 1; ++i)
        if (wA & (1 << i))
            arrA[k++] = i + 'A';
    for (int i = 0, k = 0; i < sizeof(int) * 8 - 1; ++i)
        if (wB & (1 << i))
            arrB[k++] = i + 'A';
    for (int i = 0, k = 0; i < sizeof(int) * 8 - 1; ++i)
        if (wC & (1 << i))
            arrC[k++] = i + 'A';
    for (int i = 0, k = 0; i < sizeof(int) * 8 - 1; ++i)
        if (wD & (1 << i))
            arrD[k++] = i + 'A';

    auto befor = clock();
    for (int j = 0; j < attemps; ++j) {

        cout << "Test №" << j << endl;
        cout << "arrA:" << arrA << " arrB:" << arrB << " arrC:" << arrC << " arrD:" << arrD << endl;
        doTaskWithArray(arrA, arrB, arrC, arrD);
        taskWithWord(wA, wB, wC, wD);
        doTaskWithLists(arrA, arrB, arrC, arrD);
    }
    auto after = clock();
    auto res = (double) (after - befor) / attemps;
    cout << res << endl;
    return 0;

}