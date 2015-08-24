#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H

#include "ISearch.h"

class BinarySearch : public ISearch
{
public:
    BinarySearch();
    virtual ~BinarySearch();

    size_t Search(vector<int> &pList, int element);
    string GetSearchName() { return "Binary Search"; }
};

#endif // BINARYSEARCH_H
