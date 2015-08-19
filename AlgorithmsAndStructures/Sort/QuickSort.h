#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "ISort.h"

class QuickSort : public ISort
{
public:
    QuickSort();
    virtual ~QuickSort();

    void Sort(vector<int> &pList);
    string GetAlgorithmName() { return "Quick Sort"; }
};

#endif // QUICKSORT_H
