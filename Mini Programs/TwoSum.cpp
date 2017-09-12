/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 * 			Given an array of integers, return indices of the two numbers
 * 			such that they add up to a specific target.
 * 			You may assume that each input would have exactly one solution,
 * 			and you may not use the same element twice.
 * 	Example:
 *			Given nums = [2, 7, 11, 15], target = 9,
 *			Because nums[0] + nums[1] = 2 + 7 = 9 return [0, 1].
 *************************************************************************/

#include "../src/header.h"

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
