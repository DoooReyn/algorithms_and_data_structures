/*
 * ISort.h
 *
 *  Created on: Aug 13, 2015
 *      Author: claudiotezzin
 */

#ifndef ISORT_H_
#define ISORT_H_

#include <iostream>
#include <vector>

using namespace std;


class ISort
{

public:
    virtual ~ISort() {}
    virtual void Sort(vector<int> &pList) = 0;
    virtual string GetAlgorithmName() = 0;

};

#endif /* SORT_H_ */
