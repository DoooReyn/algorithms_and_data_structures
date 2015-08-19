#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include "ISort.h"

class SelectionSort : public ISort
{
public:
    SelectionSort();
    virtual ~SelectionSort();

    void Sort(vector<int> &pList);
    string GetAlgorithmName() { return "Selection Sort"; }

};

#endif // SELECTIONSORT_H
