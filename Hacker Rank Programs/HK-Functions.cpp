/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 * 			Input will contain four integers - a,b,c,d one in each line.
 *
 * 			Print the greatest of the four integers.
 * 			PS: I/O will be automatically handled.
 *************************************************************************/

#include "../src/header.h"

int HK_Functions(int intA,
				 int intB,
				 int intC,
				 int intD) {

	int myArray[4] = {intA, intB, intC, intD};

 	int greatest = 0;

 	for(int index = 0; index < 4; index ++){
 		if(myArray[index] > greatest) {
 			greatest = myArray[index];
 		}
 	}

 	return greatest;
}
