/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 * 			You are climbing a stair case. It takes n steps to reach to
 * 			the top.
 *
 *			Each time you can either climb 1 or 2 steps. In how many
 *			distinct ways can you climb to the top?
 *
 *			Note: Given n will be a positive integer.
 *************************************************************************/

#include "header.h"

int ClimbStairs(int numberOfStairs) {
	int temp = 0;

	int stepCount;
	for(stepCount = 0; stepCount < numberOfStairs; stepCount++) {

	}

	if(numberOfStairs == stepCount) {
		temp++;
	}

	for(int stepCount = 0; stepCount < numberOfStairs; stepCount = stepCount + 2) {

	}
	if(numberOfStairs == stepCount) {
		temp++;
	}


	return temp;
}
