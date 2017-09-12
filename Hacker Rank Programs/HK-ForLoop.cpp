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

#include "../src/header.h"

//return string, put all output into a string and return string to be compared
std::string HK_ForLoop (int num1, int num2) {
	std::string returnString = "";
	int numberOfIntegers = 1;
	int temp = num1;

	do {
		if (temp == 1) {
			returnString = returnString + "one\nodd";
		} else if (temp == 2) {
			returnString = returnString + "two\neven";
		} else if (temp == 3) {
			returnString = returnString + "three\nodd";
		} else if (temp == 4) {
			returnString = returnString + "four\neven";
		} else if (temp == 5) {
			returnString = returnString + "five\nodd";
		} else if (temp == 6) {
			returnString = returnString + "six\neven";
		} else if (temp == 7) {
			returnString = returnString + "seven\nodd";
		} else if (temp == 8) {
			returnString = returnString + "eight\neven";
		} else if (temp == 9) {
			returnString = returnString + "nine\nodd";
		} else if (temp >= 10) {
			returnString = returnString + "Greater Than 9";
		} else {
			returnString = "Error";
		}
		temp = num2;
		numberOfIntegers++;
		returnString = returnString + "\n";
	} while (numberOfIntegers <= 2);

	return returnString;
}
