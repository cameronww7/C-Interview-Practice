/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 *			Input Format
 *			The first and only line consists of n integers separated
 *			by commas.
 *
 *			Output Format
 *
 *			Print the integers after parsing it.
 *			P.S.: I/O will be automatically handled. You need to complete
 *			the function only.
 *
 *			Sample Input
 *			23,4,56
 *
 *			Sample Output
 *			23
 *			4
 *			56
 *
 *************************************************************************/

#include "../src/header.h"

std::stringstream HK_StringStream(int int1,
						    	  int int2,
								  int int3) {

	std::stringstream returnStringStream;

	returnStringStream << int1 << "\n" << int2 << "\n" << int3;

//	std::cout << returnStringStream.str();

	return returnStringStream;
}
