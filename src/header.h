/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 *************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_

#include <vector>
#include <string>
#include <sstream>  // for String Stream
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

bool JumpGame(std::vector <int> & nums);

std::vector <std::string> fizzBuzz(int n);

bool isPowerOfThree(int n);

uint32_t reverseBits(uint32_t n);

int ReverseInt(int x);

std::string ReverseString(std::string xInString);

int SingleNumber(vector<int>& nums);

int UniquePaths(int xRowSize,
			    int xColSize);

/****************************************************************************
 * 							Hacker Rank Programs
 ****************************************************************************/

std::string HK_BasicDataTypes(const int    & integerNum,
							  const long   & longNum,
							  const char   & charChar,
							  const float  & floatNum,
							  const double & doubleNum);

int HK_inputAndOutput (int num1,
					   int num2,
					   int num3);

std::string HK_ConditionalStatement(int num);

int * HK_ArrayIntro (int arry[],
			   const int HR_ARRAY_INTRO_SIZE);

std::string HK_ForLoop (int num1,
						int num2);

int HK_Functions(int intA,
				 int intB,
				 int intC,
				 int intD);

struct StructStudent {
	int age;
	int standard;
	std::string firstName;
	std::string lastName;
};

StructStudent HK_Structs(int 		 xAge,
				   	     int 		 xStandard,
				         std::string xFirstName,
				         std::string xLastName);

std::string HK_Strings(std::string string1,
					   std::string string2);

std::stringstream HK_StringStream(int string1,
						    	  int string2,
								  int string3);

std::string HK_Class(int 		 xAge,
  	     	 	 	 int 		 xStandard,
					 std::string xFirstName,
					 std::string xLastName);

int HK_ClassesAndObjects();

void HK_VariableSizeArray();


#endif /* HEADER_H_ */
