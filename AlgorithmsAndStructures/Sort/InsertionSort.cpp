#include "InsertionSort.h"

InsertionSort::InsertionSort()
{

}

InsertionSort::~InsertionSort()
{

}

void InsertionSort::Sort(vector<int> &pList)
{
    //Size of the Array
    size_t arraySize = pList.size();

    for(size_t i = 1; i < arraySize; ++i)
    {
        int element = pList[i];
        size_t j = i;

        //While is not the first element and element before is bigger, we swap it.
        while( j > 0 && pList[j - 1] > element)
        {
            //Swap for element before
            swap(pList[j - 1], pList[j]);

            //Decrement J
            --j;

            //Change element position
            element = pList[j];
        }
    }
}
