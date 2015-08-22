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

private:
    void quickSort(vector<int> &pList, int first, int last);
    size_t findElementPosition(vector<int> &pList, int first, int last);
};

#endif // QUICKSORT_H
