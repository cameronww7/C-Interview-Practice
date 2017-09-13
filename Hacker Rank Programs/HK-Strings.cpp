/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 *			You are given two strings, a and b, separated by a new line.
 *			Each string will consist of lower case Latin characters ('a'-'z').
 *
 *			Output Format
 *
 *			In the first line print two space-separated integers,
 *			representing the length of a and b respectively.
 *
 *			In the second line print the string produced by concatenating
 *			a and b(a+b).
 *
 *			In the third line print two strings separated by a space, a'
 *			and b'. a' and b' are the same as a' and b', respectively,
 *			except that their first characters are swapped.
 *
 *			Sample Input
 *			abcd
 *			ef
 *
 *			Sample Output
 *			4 2
 *			abcdef
 *			ebcd af
 *
 *************************************************************************/

#include "../src/header.h"

std::string HK_Strings(std::string string1,
					   std::string string2) {
	std::string returnString = "";

//	std::cout << std::endl << string1.length() << " " << string2.length();
//	std::cout << std::endl << string1 << string2;
//	std::cout << std::endl << string2[0] << string1.substr(1,3) << " "
//			               << string1[0] << string2.substr(1,1);

	returnString = std::to_string(string1.length()) + " " +
				   std::to_string(string2.length()) + "\n" +
				   string1 + string2 + "\n" +
				   string2[0] + string1.substr(1,3) + " " +
				   string1[0] + string2.substr(1,1);

	return returnString;
}
