/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 * 			Reverse digits of an integer.
 *
 * Example1 : x = 123, return 321
 * Example2 : x = -123, return -321
 *
 * Note:
 *			The input is assumed to be a 32-bit signed integer. Your
 *			function should return 0 when the reversed integer overflows.
 *************************************************************************/

#include "../src/header.h"

int ReverseInt(int x) {
	int reverseInteger = 0;

	while (x) {
		int temp = reverseInteger * 10 + (x % 10);
		if (temp / 10 != reverseInteger) {
			reverseInteger = 0;
			break;
		}
		reverseInteger = temp;
		x = x / 10;
	}

	return reverseInteger;
}
