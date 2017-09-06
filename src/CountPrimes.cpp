/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 * 			Count the number of prime numbers less than a non-negative
 * 			number, n.
 *************************************************************************/

#include "header.h"

namespace {
	bool isAPrimeNumber(int n) {
		bool isAPrime = false;
		if((n%2) == 0 &&
		   (n%3) == 0 &&
		   (n%5) == 0 &&
		   (n&7) == 0 &&
		   (n&11) == 0) {
			isAPrime = true;
		}
		return isAPrime;
	}
} // Anonymous Namespace

int CountPrimes(int numberToBeCounted) {


}
