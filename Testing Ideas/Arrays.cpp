/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 *
 *************************************************************************/

#include "../src/header.h"

void ArrayTesting(void) {
	int myArray[] = {5,4,3,2,1};

	//knows the size of the array
	for(int i : myArray) {
		printf("\n> Element is %d", i);
	}

	int *ptr = myArray;

	//does not know the size of the array
	while(*ptr <= 5) {
		printf("\n> ptr is at %d", *ptr);
		*ptr++; //moves through the array memory locations
	}
}
