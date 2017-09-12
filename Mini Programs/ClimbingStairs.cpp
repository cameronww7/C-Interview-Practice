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

#include "../src/header.h"

namespace {
int Climb_Stairs(int stepCount, int numberOfStairs) {
	if (stepCount > numberOfStairs) {
		return 0;
	}

	if (stepCount == numberOfStairs) {
		return 1;
	}

	return (Climb_Stairs(stepCount + 1, numberOfStairs) + Climb_Stairs(stepCount + 2, numberOfStairs));
}
}// Ananyomous Namespace

int ClimbStairs(int numberOfStairs) {
	return Climb_Stairs(0, numberOfStairs);
}

