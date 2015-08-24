#include "BinarySearch.h"

BinarySearch::BinarySearch()
{

}

BinarySearch::~BinarySearch()
{

}

//Binary search implementation assumes that the array is already ordered.
size_t BinarySearch::Search(vector<int> &pList, int element)
{
    size_t first = 0;
    size_t midPos = pList.size() >> 1;
    size_t last = pList.size() - 1;


    while (pList[midPos] != element)
    {
        if(pList[midPos] > element)
        {
            last = --midPos;
        }
        else
        {
            first = ++midPos;
        }

        midPos = first + ((last - first) >> 1);
    }

    return midPos;
}
