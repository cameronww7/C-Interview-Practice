/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 *			A character is to be removed from a string.
 *************************************************************************/

#include "header.h"
#include <algorithm>
#include <string>

string RemoveCharFromString (string xString, char charToBeRemoved) {
	xString.erase(std::remove(xString.begin(), xString.end(), charToBeRemoved), xString.end());
	return xString; // Cannot put on same line, will give compile error.S
}

