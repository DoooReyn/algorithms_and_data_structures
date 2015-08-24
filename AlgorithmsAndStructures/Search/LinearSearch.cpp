#include "LinearSearch.h"

LinearSearch::LinearSearch()
{

}

LinearSearch::~LinearSearch()
{

}
/*
 * Search for the position of element in a array;
 */
size_t LinearSearch::Search(vector<int> &pList, int element)
{
    size_t position = 0;

    for(size_t i = 0; i < pList.size(); ++i)
    {
        if(pList[i] == element)
        {
            position = i;
            break;
        }
    }

    return position;
}

