/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 * 			Input consists of the following space-separated values: int,
 * 			long, char, float, and double, respectively.
 *
 * 			Print each element on a new line in the same order it was
 * 			received as input. Note that the floating point value should
 * 			be correct up to 3 decimal places and the double to 9 decimal
 * 			places.
 *
 * 			Sample Input
 * 			3 12345678912345 a 334.239990 14049.30493
 *
 * 			Sample OutPut
 * 			3
 *			12345678912345
 *			a
 *			334.239990
 *			14049.304930000
 *************************************************************************/

#include "../../src/header.h"

std::string HK_BasicDataTypes(const int    & integerNum,
							  const long   & longNum,
							  const char   & charChar,
							  const float  & floatNum,
							  const double & doubleNum) {
//Output To Console
//	cin >> integerNum;
//	cin >> longNum;
//	cin >> charChar;
//	cin >> floatNum;
//	cin >> doubleNum;

//	cout << std::endl << integerNum;
//	cout << std::endl << fixed << longNum;
//	cout << std::endl << charChar;
//	cout << std::endl << fixed << floatNum;
//	cout << std::endl << fixed << doubleNum;

	std::string returnString = std::to_string(integerNum) + " " + std::to_string(longNum)
							   + " " + charChar + " " + std::to_string(floatNum)
							   + " " + std::to_string(doubleNum);
	return returnString;
}
