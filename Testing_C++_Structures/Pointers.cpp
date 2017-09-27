/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 *
 *************************************************************************/

#include "../src/header.h"

namespace {
	double averageCost(double* xPtrPriceArray,
					   int 	   xCountTwo, // same value as xCount
					   int 	 * xCount) {  // 5 passed in as a ptr
		double sum = 0;

		for(int index = 0; index < *xCount; index++) {
			sum += *(xPtrPriceArray + index);
		}

		xCountTwo = 9;
		*xCount   = 9;

		return sum / *xCount;
	}
}

void Pointers(void) {
	/**************************************************************************
	 * Pointer demo, of all different ways to use them.
	 *************************************************************************/
	int  x 	 = 10;
	int* ptr = &x;
	int& y 	 = x;
	int  d 	 = 200;

	printf("\n> x       is %d", x);
//	printf("\n> x       is %d", *x); // will produce an error cause it is.
	printf("\n> &x      is %p", &x);
	printf("\n> *ptr    is %d", *ptr);
	printf("\n> ptr     is %p", ptr);
	printf("\n> &ptr    is %p", &ptr);
	printf("\n> &(*ptr) is %p", &(*ptr));
	printf("\n> y       is %d", y);
	printf("\n> &y      is %p", &y);
//	printf("\n> &y      is %p", *y); // will produce an error cause it is.
	printf("\n> d       is %d", d);
	printf("\n> &d      is %p", &d);

	/**************************************************************************
	 * Demo to show address of pointers
	 *************************************************************************/
	int number = 240;		//define an int variable
	int* numPtr ;			//define an integer pointer numPtr
	numPtr = &number;		//assign the address to numPtr

	std::cout << "\n\n> The address of number is: " << numPtr << std::endl;

	/**************************************************************************
	 * Sizes of all data types
	 *************************************************************************/
	std::cout << "> Size of boolean: " << sizeof(bool) 	 << std::endl;
	std::cout << "> Size of char:    " << sizeof(char) 	 << std::endl;
	std::cout << "> Size of int:     " << sizeof(int) 	 << std::endl;
	std::cout << "> Size of float:   " << sizeof(float)  << std::endl;
	std::cout << "> Size of long:    " << sizeof(long) 	 << std::endl;
	std::cout << "> Size of double:  " << sizeof(double) << std::endl;


	/**************************************************************************
	 * Sizes of pointer data types
	 *************************************************************************/
	bool* pBool;
	char* pChar;
	int*  pInt;

	std::cout << "\n> Size of boolean ptr: " << sizeof(pBool) << std::endl;
	std::cout <<   "> Size of char ptr:    " << sizeof(pChar) << std::endl;
	std::cout <<   "> Size of int ptr:     " << sizeof(pInt)  << std::endl;


	/**************************************************************************
	 * Dereferencing pointers Demo
	 *************************************************************************/
	double  testScores[5] = { 10, 15, 25, 30, 50};
	double* pTestScores;
	double  sum	= 400;

	pTestScores = testScores;

	/**************************************************************************
	 * for loop works but wanted to hard code.
	 *************************************************************************/
//	sum = 0;
//	for (int index = 0; index < 5; index++) {
//		std::cout << "\n> Enter the test score: " << std::endl;
//		std::cin >> *(pTestScores + index); //Deref the pointer to access data
//		sum += *(pTestScores + index); //Deref to get value to add to sum
//	}

	std::cout << "\n> testScores: " << testScores << std::endl;
	std::cout << "> Total for all students: " << sum << std::endl;
	std::cout << "> Average score: " << sum / 5 << std::endl << std::endl;


	/**************************************************************************
	 * Demo For Pointer to Pointer!!!!
	 *************************************************************************/
	int   num 		= 10;
	int*  ptrNum 	= &num;
	int** ptrPtrNum = &ptrNum; // pointer to pointer to num

	std::cout << "> Address of &num      " << &num 	    << std::endl;
	std::cout << "> Address of ptrNum    " << ptrNum  	<< std::endl;
	std::cout << "> Address of &ptrNum   " << &ptrNum 	<< std::endl;
	std::cout << "> Address of ptrPtrNum " << ptrPtrNum << std::endl;


	/**************************************************************************
	 * Demo For Pointer to Array!!!!
	 *************************************************************************/
	double Scores[5] = { 100, 95, 99, 85, 83 };
	double  *pointerToArray[5];

	for(int index = 0; index < 5; index++) {
		pointerToArray[index] = &(Scores[index]);
		std::cout << "\n> Element in Array " << index << " : " << pointerToArray[index];

		//deref the pointer to the point to the array
		std::cout << " - Data : " << *pointerToArray[index];

		//deref deref will do the same as adding [index]
		std::cout << " - " << **(pointerToArray + index);
	}


	/**************************************************************************
	 * Passing Pointers Demo
	 *************************************************************************/
	double prices[5]{ 5.00, 4.50, 3.75, 3.10, 6.75 };
	int    quantity = 5;
	double average = averageCost(prices, 5, &quantity);

	std::cout << "\n\n> $" << average << " - Quantity " << quantity << std::endl;


	/**************************************************************************
	 * New and Delte Pointer Demo
	 *************************************************************************/
	int* newPtr(new int(55));
	std::cout << "\n> new Ptr : " << *newPtr << std::endl;
	delete newPtr;

	int* ptrArray(new int[5]{10,20,30,40,50});
	*(ptrArray + 1) += 5;
	std::cout << "\n> " << *ptrArray << ", " << *(ptrArray + 1) << std::endl;
	delete ptrArray;


}

