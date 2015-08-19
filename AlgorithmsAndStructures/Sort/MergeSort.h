#ifndef MERGESORT_H
#define MERGESORT_H

#include "ISort.h"

class MergeSort : public ISort
{
public:
    MergeSort();
    virtual ~MergeSort();

    void Sort(vector<int> &pList);
    string GetAlgorithmName() { return "Merge Sort"; }
};

#endif // MERGESORT_H
