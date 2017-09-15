/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 * 			Input will contain two integers,  and , separated by a newline.
 *
 * 			You have to print the updated value of  and , on two different
 * 			lines.
 *
 * 			P.S.: Input/ouput will be automatically handled. You only have
 * 			to complete the void update(int *a,int *b) function.
 *
 * 			Sample Input
 * 			4
 * 			5
 *
 * 			Sample Output
 * 			9
 * 			1
 *
 * 			Explanation
 * 			a* = 4 + 5 = 9
 * 			b* = |4 - 5| = 1
 *
 *************************************************************************/

#include "../../src/header.h"

namespace {
void update(int *a,
			int *b) {
    // Complete this function
}
}

//return a string with both numbers seprated by a space for checking
std::string HK_Pointers (int xNum1,
						 int xNum2) {
	std::string returnString = "";

    int * ptrNum1 = &xNum1;
    int * ptrNum2 = &xNum2;

//    scanf("%d %d", &xNum1, &xNum2);

//    update(ptrNum1, ptrNum2);

//    printf("%d\n%d", xNum1, xNum2);

    return returnString;
}
