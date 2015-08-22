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
private:
    void mergeSort(vector<int> &v);
    std::vector<int> merge(vector<int> &left, vector<int> &right);
};

#endif // MERGESORT_H
