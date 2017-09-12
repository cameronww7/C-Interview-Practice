/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 *			Find out if the passed in string is a Palindrome.
 *************************************************************************/

#include "header.h"
#include <string>

bool IsPalindrome (string xStringInput) {
	bool isPalindrome = false;
	for (unsigned int index = 0; index < (xStringInput.size() / 2); index++) {
		if(xStringInput[index] == xStringInput[(xStringInput.size() - index - 1)]) {
			isPalindrome = true;
		} else {
			isPalindrome = false;
		}
	}
	return isPalindrome;
}
