#include "SelectionSort.h"

SelectionSort::SelectionSort()
{

}

SelectionSort::~SelectionSort()
{

}

void SelectionSort::Sort(vector<int> &pList)
{
    //Size of the Array
    size_t arraySize = pList.size();


    for(size_t i = 0; i < arraySize; ++i)
    {
        //Smallest element index
        size_t idxOfSmall = i;

        //looking for element smaller then pList[idOfSmall]
        for(size_t j = i + 1; j < arraySize; ++j)
        {
            if(pList[j] < pList[idxOfSmall])
            {
                idxOfSmall = j;
            }
        }

        //Swap element if it is not the smaller already;
        if(idxOfSmall != i)
        {
            swap(pList[i], pList[idxOfSmall]);
        }
    }
}

