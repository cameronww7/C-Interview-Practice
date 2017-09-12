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

void update(int *a, int *b) {
    // Complete this function
}

//return a string with both numbers seprated by a space for checking
std::string HK_Pointers (int a, int b) {
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

}
