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
		bool isAPrime = true;
		if(n <= 1) {
			return false;
		}

		for(int index = 2; index * index <= n; index++) {
			if(n%index == 0) {
				isAPrime = false;
			}
		}

		return isAPrime;
	}
} // Anonymous Namespace

int CountPrimes(int numberToBeCounted) {
	int theCount = 0;

	for(int index = 1; index < numberToBeCounted; index++) {
		if(isAPrimeNumber(index)) {
			theCount++;
		}
	}
	return theCount;
}
