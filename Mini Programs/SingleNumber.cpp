/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 * 			Given an array of integers, every element appears twice except
 * 			for one. Find that single one.
 *
 *	Note:
 *		Your algorithm should have a linear runtime complexity. Could you
 *		implement it without using extra memory?
 *************************************************************************/

#include "../src/header.h"

int SingleNumber(vector<int>& nums) {
	int returnInteger = 0;
	std::sort (nums.begin(), nums.end());

	for(int index = 0; index < signed(nums.size()); index = index + 2) {
		if(nums[index] != nums[index + 1]) {
			returnInteger = nums[index];
		}
	}

	return returnInteger;
}
