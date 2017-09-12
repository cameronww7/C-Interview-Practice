/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 *
 *			Write a program that outputs the string representation of
 *			numbers from 1 to n.
 *
 *			But for multiples of three it should output “Fizz” instead
 *			of the number and for the multiples of five output “Buzz”.
 *			For numbers which are multiples of both three and five output
 *			“FizzBuzz”.
 *
 * Example:
 *
 *		n = 15,
 *
 *		Return:
 *		[ "1", "2", "Fizz", "4", "Buzz", "Fizz", "7", "8", "Fizz",
 *   	  "Buzz", "11", "Fizz", "13", "14", "FizzBuzz"]
 *************************************************************************/

#include "header.h"


std::vector <std::string> fizzBuzz(int n) {
	std::vector <std::string> FizzBuzz;
	std::string temp;

	FizzBuzz.push_back("1");

	for(int index = 2; index <= n; index++) {
		if((index % 3) == 0 && (index % 5) == 0) {
			FizzBuzz.push_back("FizzBuzz");
		} else if((index % 3) == 0) {
			FizzBuzz.push_back("Fizz");
		} else if((index % 5) == 0) {
			FizzBuzz.push_back("Buzz");
		} else {
			temp = std::to_string(index);
			FizzBuzz.push_back(temp);
		}
	}
	return FizzBuzz;
}
