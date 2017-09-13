/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 * 			Given an array of non-negative integers, you are initially
 * 			positioned at the first index of the array.
 *
 *			Each element in the array represents your maximum jump length
 *			at that position.
 *
 *			Determine if you are able to reach the last index.
 *
 *	For example:
 *			A = [2,3,1,1,4], return true.
 *			A = [3,2,1,0,4], return false.
 *************************************************************************/

#include "../src/header.h"

bool JumpGame (vector <int> & nums) {
	bool temp = false;

	int index = 0;
//	cout << endl << index <<  " - " << signed(nums.size()-1);

	while(index < signed(nums.size()-1)) {
		if(nums[index] == 0) {
			break;
		}
		index = index + nums[index];
	}

	if(index == signed(nums.size()-1)) {
		temp = true;
	}

	return temp;
}
