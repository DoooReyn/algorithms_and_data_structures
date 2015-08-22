/*
 * BubbleSort.cpp
 *
 *  Created on: Aug 13, 2015
 *      Author: claudiotezzin
 */

#include "BubbleSort.h"

BubbleSort::BubbleSort() {
	// TODO Auto-generated constructor stub

}

BubbleSort::~BubbleSort() {
	// TODO Auto-generated destructor stub
}

void BubbleSort::Sort(std::vector<int> &pList)
{
    if(pList.size() == 0)
        return;

	size_t lastIdx = pList.size() - 1;
	bool isOrdered = true;

	do
	{
		//starts odered to skip if there is no swap.
		isOrdered = true;

        for (size_t i = 0; i <= lastIdx - 1; ++i)
		{
			if (pList[i] > pList[i + 1])
			{
				isOrdered = false;
				std::swap(pList[i], pList[i + 1]);
			}
		}

        //Last index is already ordered
		--lastIdx;

    } while (!isOrdered && lastIdx > 0);
}

