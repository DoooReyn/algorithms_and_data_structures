#ifndef LINEARSEARCH_H
#define LINEARSEARCH_H

#include "ISearch.h"

class LinearSearch : public ISearch
{
public:
    LinearSearch();
    virtual ~LinearSearch();

    size_t Search(vector<int> &pList, int element);
    string GetSearchName() { return "Linear Search"; }

};

#endif // LINEARSEARCH_H
