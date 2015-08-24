#ifndef ISEARCH
#define ISEARCH

#include <iostream>
#include <vector>

using namespace std;


class ISearch
{

public:
    virtual ~ISearch() {}
    virtual size_t Search(vector<int> &pList, int element) = 0;
    virtual string GetSearchName() = 0;

};

#endif // ISEARCH

