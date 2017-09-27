/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 *
 *************************************************************************/

#include "../src/header.h"


void Arrays(void) {
	double  values[5];			//declare an array values with 10 elements
	double* ptrValue = values;	//define a pointer to the array
	std::cout << "\n> value array address: " << values << std::endl;
	std::cout << ">             pValues: "   << ptrValue << std::endl;

	/**************************************************************************
	 * How memory Address of Array
	 *************************************************************************/
	int  numbers[5];
	int* ptrNumbers = numbers;
	for (int index = 0; index < 5; index++) {
		std::cout << "\n> Memory Address " << index << " : " << ptrNumbers;
	}

	int myArray[] = {5,4,3,2,1};

	std::cout << std::endl;

	/**************************************************************************
	 * print elements of array using different for loop
	 *************************************************************************/
	//knows the size of the array
	for(int index : myArray) {
		printf("\n> Element is %d", index);
	}

	int *ptr = myArray;

	std::cout << std::endl;

	/**************************************************************************
	 * print all elements using pointers
	 *************************************************************************/
	//does not know the size of the array
	while(*ptr <= 5) {
		printf("\n> ptr is at %d", *ptr);
		*ptr++; //moves through the array memory locations
	}
}
