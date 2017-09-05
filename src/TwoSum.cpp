/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 * 			Given an array of integers, return indices of the two numbers
 * 			such that they add up to a specific target.
 * 			You may assume that each input would have exactly one solution,
 * 			and you may not use the same element twice.
 *************************************************************************/

#include "header.h"

vector<int> TwoSum (vector<int> & xNumbers, int xGoalNumber) {
	vector<int> twoSum;
	for(int indexOne = 0; indexOne < signed(xNumbers.size()); indexOne++) {
		for(int indexTwo = 0; indexTwo < signed(xNumbers.size()); indexTwo++) {
			if ((xNumbers[indexOne] != xNumbers[indexTwo]) &&
				(xNumbers[indexOne] + xNumbers[indexTwo]) == xGoalNumber) {
				twoSum.push_back(xNumbers[indexOne]);
				twoSum.push_back(xNumbers[indexTwo]);
			}
		}
	}

	return xNumbers;
}
