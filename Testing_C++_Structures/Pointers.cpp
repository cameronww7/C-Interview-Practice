/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 *
 *************************************************************************/

#include "../src/header.h"

void PointersTesting(void) {
	int x = 10;
	int *ptr = &x;
	int &y = x;
	int d = 200;

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
}
