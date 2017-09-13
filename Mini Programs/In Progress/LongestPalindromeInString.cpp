/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 *			Find the Longest Palindrome in a string, assume there is only
 *			one max length Palindrome.
 *************************************************************************/

#include "../../src/header.h"

std::string LongestPalindromeInString (std::string xStringInput) {
	std::string longestPalindrome;
	bool isPalindrome = false;
	for (unsigned int index = 0; index < (xStringInput.size() / 2); index++) {
		if(xStringInput[index] == xStringInput[(xStringInput.size() - index - 1)]) {
			isPalindrome = true;
		} else {
			isPalindrome = false;
		}
	}

	return longestPalindrome;
}
