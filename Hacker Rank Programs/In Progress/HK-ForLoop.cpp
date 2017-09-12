/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 * 			You will be given two positive integers, a and b(a <= b),
 * 			separated by a newline.
 *
 * 			For each integer n in the interval [a,b] :
 *
 * 			If , 1 <= n <= 9 then print the English representation of it
 * 			in lowercase. That is "one" for 1, "two" for 2, and so on.
 *
 * 			Else if n > 9 and it is an even number, then print "even".
 *
 * 			Else if n > 9 and it is an odd number, then print "odd".
 *************************************************************************/

#include "../../src/header.h"

//return string, put all output into a string and return string to be compared
std::string HK_ForLoop (int num1, int num2) {
	std::string returnString = "";
	int numberOfIntegers = 1;
	int temp = num1;

	do {
		if (temp == 1) {
			returnString = "one";
		} else if (temp == 2) {
			returnString = "two";
		} else if (temp == 3) {
			returnString = "three";
		} else if (temp == 4) {
			returnString = "four";
		} else if (temp == 5) {
			returnString = "five";
		} else if (temp == 6) {
			returnString = "six";
		} else if (temp == 7) {
			returnString = "seven";
		} else if (temp == 8) {
			returnString = "eight";
		} else if (temp == 9) {
			returnString = "nine";
		} else if (temp >= 10) {
			returnString = "Greater Than 9";
		} else {
			returnString = "Error";
		}
		temp = num2;
		numberOfIntegers++;
	} while (numberOfIntegers <= 2);

	return returnString;
}
