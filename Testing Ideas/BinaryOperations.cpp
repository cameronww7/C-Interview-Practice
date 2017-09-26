/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 *
 *************************************************************************/

#include "../src/header.h"
namespace {

	const char * u8_to_bin ( unsigned char x ) {

		static char s[sizeof(char) + 1];

		for ( char & c : s ) {
			c = 0; // zero out string
		}

		char * sp = s;

		for (unsigned char z = 128; z > 0; z >>= 1) {
			*(sp++) = ((x & z) == z) ? '1' : '0';
		}

		return s;
	}

}

void BinaryOperations(void) {
    unsigned char x = 5;
    unsigned char y = 10;

    printf("x is %s\n", u8_to_bin(x));
    printf("y is %s\n", u8_to_bin(y));
    printf("result is %s\n", u8_to_bin(x | y));
}
