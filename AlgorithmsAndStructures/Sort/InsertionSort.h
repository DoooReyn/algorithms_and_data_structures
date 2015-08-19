#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

#include "ISort.h"

class InsertionSort : public ISort
{
public:
    InsertionSort();
    virtual ~InsertionSort();

    void Sort(vector<int> &pList);
    string GetAlgorithmName() { return "Insertion Sort"; }
};

#endif // INSERTIONSORT_H
