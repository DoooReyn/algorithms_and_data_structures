#ifndef TESTCLASS_H
#define TESTCLASS_H

#include <iostream>
#include <algorithm>

#include "Sort/SelectionSort.h"
#include "Sort/InsertionSort.h"
#include "Sort/BubbleSort.h"
#include "Sort/QuickSort.h"
#include "Sort/MergeSort.h"

using namespace std;

class TestClass
{
public:
    TestClass();
    ~TestClass();

    void TestSortAlgorthms();

private:
    vector<ISort*> m_vecAlg;
    function<void(int&)> m_fPrint;


    void TestEmptyArray(ISort *pAlg);
    void TestSameNumberArray(ISort *pAlg);
    void TestOrderedArray(ISort *pAlg);
    void TestReverseOrderedArray(ISort *pAlg);
    void TestNegativeArray(ISort *pAlg);
    void TestSomeEqualNumberArray(ISort *pAlg);
};

#endif // TESTCLASS_H
