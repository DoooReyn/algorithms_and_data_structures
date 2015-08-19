/*
 * BubbleSort.h
 *
 *  Created on: Aug 13, 2015
 *      Author: claudiotezzin
 */

#ifndef BUBBLESORT_H_
#define BUBBLESORT_H_

#include "ISort.h"

class BubbleSort: public ISort {
public:
	BubbleSort();
	virtual ~BubbleSort();

    void Sort(vector<int> &pList);
    string GetAlgorithmName() { return "Bubble Sort"; }

};

#endif /* BUBBLESORT_H_ */
