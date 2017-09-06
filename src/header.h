/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 *************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_

#include <vector>
#include <string>
#include <iostream>
using namespace std;

bool   IsPalindrome (string xString);
double EuclideanDistance (int xNum);
string RemoveCharFromString (string xString, char charToBeRemoved);
string LongestPalindromeInString (string xString);
vector<int> TwoSum (vector<int> & xNumbers, int xGoalNumber);
float MedianOfTwoSortedArrays (const int xArrayOne[], const int xArrayTwo[], const int ARR_SIZE_ONE, const int ARR_SIZE_TWO);
int ClimbStairs(int n);



#endif /* HEADER_H_ */
