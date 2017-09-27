/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 *
 *************************************************************************/

#include "../src/header.h"

#define MAX(a,b) (a > b ? a++ : b++)
#define EQUAL(a,b) (a == b ? ++a : ++b)
#define SWAP(a,b) do { 			\
						a ^= b;	\
						b ^= a;	\
						a ^= b;	\
					} while(0)	// backslash makes it all on one line

void Macros(void) {
	int a = 5;
	int b = 2;
	int c = 10;

	printf("\n> before a:%d, b:%d, c:%d", a,b,c);

	printf("\n> Macro Max   : %d", MAX(a,b));
	printf("\n> Macro EQUAL : %d", EQUAL(a,b));
	printf("\n> after a:%d, b:%d, c:%d", a,b,c);
	SWAP(a,c);
	printf("\n> Macro SWAP  : a:%d, b:%d", a,c);
	printf("\n> after a:%d, b:%d, c:%d", a,b,c);

}
