/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 * 			Write a function that takes a string as input and returns the string reversed.
 *
 * Example:
 *			Given s = "hello", return "olleh".
 *************************************************************************/

#include "../src/header.h"

std::string ReverseString(std::string xInString) {
	std::string returnString = "";

	for(int index = xInString.length()-1; index >= 0; index--) {
		returnString = returnString + xInString[index];
	}

	return returnString;
}
