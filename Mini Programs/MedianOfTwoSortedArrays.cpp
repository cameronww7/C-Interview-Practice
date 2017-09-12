/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 * 			There are two sorted arrays arry1 and arry2 of size m and n
 * 			respectively.
 * 			Find the median of the two sorted arrays.
 *************************************************************************/

#include "../src/header.h"

float MedianOfTwoSortedArrays (const int xArrayOne[], const int xArrayTwo[], const int ARR_SIZE_ONE, const int ARR_SIZE_TWO) {
	float median = -1;
	float tempArray[ARR_SIZE_ONE + ARR_SIZE_TWO];

	for(int index = 0; index < ARR_SIZE_ONE + ARR_SIZE_TWO; index++) {
		tempArray[index] = 0.0;
	}

	for(int index = 0; index < ARR_SIZE_ONE; index++) {
		tempArray[index] = xArrayOne[index];
	}

	int startingPoint = ARR_SIZE_ONE;
	for(int index = 0; index < ARR_SIZE_TWO; index++) {
//		cout << endl << "starting : " << startingPoint << " - " << xArrayTwo[index];
		tempArray[startingPoint] = xArrayTwo[index];
		++startingPoint;
	}

//	cout << endl << tempArray[0];
//	cout << endl << tempArray[1];
//	cout << endl << tempArray[2];
//	cout << endl << tempArray[3];
	median = (tempArray[0] + tempArray[ARR_SIZE_ONE + ARR_SIZE_TWO - 1]) / 2.0;
//	cout << endl << tempArray[ARR_SIZE_ONE + ARR_SIZE_TWO-1];

	return median;
}
