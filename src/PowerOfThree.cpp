/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 * 			Given an integer, write a function to determine if it is a power of three.
 *
 *	Follow up:
 *		Could you do it without using any loop / recursion?
 *************************************************************************/

#include "header.h"

bool isPowerOfThree(int n) {
	bool isPOf3 = false;

	if ((n % 3) == 0) {
		isPOf3 = true;
	}

	return isPOf3;
}
