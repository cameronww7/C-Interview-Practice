/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 * 			If 1 - 9, then print the lowercase English word corresponding to t
 * 			he number (e.g., one for , two for , etc.).
 *
 * 			If n > 9, print Greater than 9.
 *************************************************************************/

#include "../src/header.h"

std::string HK_ConditionalStatement(int num) {
	std::string returnString = "";

	if (num == 1) {
		returnString = "one";
//		std::cout << std::endl << "one";
	} else if (num == 2) {
		returnString = "two";
//		std::cout << std::endl << "two";
	} else if (num == 3) {
		returnString = "three";
//		std::cout << std::endl << "three";
	} else if (num == 4) {
		returnString = "four";
//		std::cout << std::endl << "four";
	} else if (num == 5) {
		returnString = "five";
//		std::cout << std::endl << "five";
	} else if (num == 6) {
		returnString = "six";
//		std::cout << std::endl << "six";
	} else if (num == 7) {
		returnString = "seven";
//		std::cout << std::endl << "seven";
	} else if (num == 8) {
		returnString = "eight";
//		std::cout << std::endl << "eight";
	} else if (num == 9) {
		returnString = "nine";
//		std::cout << std::endl << "nine";
	} else if (num >= 10) {
		returnString = "Greater Than 9";
//		std::cout << std::endl << "Greater Than 9";
	} else {
		returnString = "Error";
//		std::cout << std::endl << "Error";
	}
	return returnString;
}
