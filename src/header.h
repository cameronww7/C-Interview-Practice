/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 *************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_

#include <vector>
#include <string>
#include <iostream>
#include <algorithm> // for std::sort
#include <iomanip> // for setw
#include <cstdint> // for uint32_t
using namespace std;

bool   IsPalindrome (std::string xString);

double EuclideanDistance (int xNum);

std::string RemoveCharFromString (std::string xString,
							 char charToBeRemoved);

std::string LongestPalindromeInString (std::string xString);

std::vector <int> TwoSum (std::vector<int> & xNumbers,
					int xGoalNumber);

float MedianOfTwoSortedArrays (const int xArrayOne[],
							   const int xArrayTwo[],
							   const int ARR_SIZE_ONE,
							   const int ARR_SIZE_TWO);

int ClimbStairs(int numberOfStairs);

int CountPrimes(int numberToBeCounted);

bool CanJump(std::vector <int> & nums);

std::vector <std::string> fizzBuzz(int n);

bool isPowerOfThree(int n);

uint32_t reverseBits(uint32_t n);

int ReverseInt(int x);

std::string ReverseString(std::string xInString);

int SingleNumber(vector<int>& nums);



#endif /* HEADER_H_ */
