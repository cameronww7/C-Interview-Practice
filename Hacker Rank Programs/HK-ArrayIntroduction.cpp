/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 * 			The first line of the input contains N,where N is the number of
 * 			integers.The next line contains N integers separated by a space.
 *
 * 			Sample Input
 * 			4
 * 			1 4 3 2
 *
 * 			Sample Output
 * 			2 3 4 1
 *
 *************************************************************************/

#include "../src/header.h"


int * HK_ArrayIntro (int arry[],
			   const int HR_ARRAY_INTRO_SIZE) {

	int myHK_ArrayIntro[HR_ARRAY_INTRO_SIZE];

	for (int index = 0; index < HR_ARRAY_INTRO_SIZE; index++) {
		myHK_ArrayIntro[index] = arry[index];
	}

	int arrayStart = HR_ARRAY_INTRO_SIZE-1;

	for (int index = 0; index < HR_ARRAY_INTRO_SIZE; index++) {
		arry[index] = myHK_ArrayIntro[arrayStart--];
	}

	return arry;
}
