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

    printf("\n>-------------- x is %s", u8_to_bin(x));
    printf("\n>-------------- y is %s", u8_to_bin(y));
    printf("\n>----------------------------");
    printf("\n> (x | y)  result is %s", u8_to_bin(x | y));
    printf("\n> (x | y)  result is %s", u8_to_bin(x & y));

    printf("\n\n>-------------- x is %s", u8_to_bin(x));
    printf("\n>----------------------------");
    printf("\n> (x >> 1) result is %s", u8_to_bin(x >> 1));
    printf("\n> (x << 2) result is %s", u8_to_bin(x << 2));

    printf("\n\n>-------------- y is %s", u8_to_bin(y));
    printf("\n>----------------------------");
    printf("\n> (y >> 1) result is %s", u8_to_bin(y >> 1));
    printf("\n> (y << 2) result is %s", u8_to_bin(y << 2));
}
