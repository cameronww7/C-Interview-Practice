/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 *************************************************************************/

#include "header.h"

int main() {

	//Palindrome Program
	std::cout << "\n\nPalindrome Program";
	string Palindrome = "abcdcba";

	if (IsPalindrome(Palindrome)) {
		std::cout << std::endl << "> Worked : Palindrome : " << Palindrome;
	} else {
		std::cout << std::endl << "> Didn't Work : Palindrome : " << Palindrome;
	}


	//Longest Palindrome in String Program
	std::cout << "\n\nLongest Palindrome in String Program";
	string xString = "abbbbabcbacddsa";
	Palindrome = LongestPalindromeInString(xString);

	if (Palindrome == "abcba") {
		std::cout << std::endl << "> Worked : Longest Palindrome : " << Palindrome;
	} else {
		std::cout << std::endl << "> Didn't Work : No Palindrome in String : " << Palindrome;
	}


	//Euclidean Distance Program
	std::cout << "\n\nEuclidean Distance Program";
	double euclideanDistance = EuclideanDistance(4);

	if (euclideanDistance == 2) {
		std::cout << std::endl << "> Worked : " << euclideanDistance;
	} else {
		std::cout << std::endl << "> Didn't Work : " << euclideanDistance;
	}


	//Remove Char from String Program
	std::cout << "\n\nRemove Char from String Program";
	xString = "aaabaa";

	if (RemoveCharFromString(xString, 'b') == "aaaaa") {
		std::cout << std::endl << "> Worked : " << xString;
	} else {
		std::cout << std::endl << "> Didn't Work : " << xString;
	}


	//TwoSum Program
	std::cout << "\n\nTwoSum Program";
	int goalNumber = 9;
	const int myArray[] = {2,7,11,15};
	vector<int> myVector (myArray, myArray + sizeof(myArray) / sizeof(myArray[0]));
	myVector = TwoSum(myVector, goalNumber);
	int theSum = myVector[0] + myVector[1];

	if (theSum == goalNumber) {
		std::cout << std::endl << "> Worked : " << theSum << " == " << goalNumber
				  << " : "<< myVector[0] << " + " << myVector[1];
	} else {
		std::cout << std::endl << "> Didn't Work : " << theSum << " == " << goalNumber
				  << " : "<< myVector[0] << " + " << myVector[1];
	}


	//Median Of Two Sorted Arrays Program
	std::cout << "\n\nMedian Of Two Sorted Arrays Program";
	const int ARR_SIZE_ONE = 2;
	const int ARR_SIZE_TWO = 2;
	const int myArrayOne[ARR_SIZE_ONE] = {1,2};
	const int myArrayTwo[ARR_SIZE_TWO] = {3,4};
	float goalMedian = 2.5;
	float returnMedian = MedianOfTwoSortedArrays(myArrayOne, myArrayTwo, ARR_SIZE_ONE, ARR_SIZE_TWO);

	if (returnMedian == goalMedian) {
		std::cout << std::endl << "> Worked : " << returnMedian << " == " << goalMedian;
	} else {
		std::cout << std::endl << "> Didn't Work : " << returnMedian << " == " << goalMedian;
	}


	return 0;
}
