#include "QuickSort.h"

QuickSort::QuickSort()
{

}

QuickSort::~QuickSort()
{

}

void QuickSort::Sort(vector<int> &pList)
{
    if(!pList.empty())
    {
        quickSort(pList, 0, pList.size() - 1);
    }
}

void QuickSort::quickSort(vector<int> &pList, int first, int last)
{
    if (first >= last)
    {
        return;
    }
    else
    {
        size_t el = findElementPosition(pList, first, last);
        quickSort(pList, first, el - 1);
        quickSort(pList, el + 1, last);
    }
}

size_t QuickSort::findElementPosition(vector<int> &pList, int first, int last)
{
    //Choose a pivot in the middle of the array
    int pivotIdx = first + ((last - first) / 2);
    //Set the element to be changed at the beginning of the array
    size_t elIdx = first;

    //Put the pivot in the end of the array
    std::swap(pList[pivotIdx], pList[last]);
    pivotIdx = last;

    for(int i = first; i < last; ++i)
    {
        if(pList[i] < pList[pivotIdx])
        {
            std::swap(pList[elIdx], pList[i]);
            ++elIdx;
        }
    }

    //Now we no that el is the position of our pivot, so we swap it
    std::swap(pList[elIdx], pList[pivotIdx]);

    return elIdx;
}
