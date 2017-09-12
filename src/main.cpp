/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 *************************************************************************/

#include "header.h"

int main() {

	//Palindrome Program
	std::cout << "\n\nPalindrome Program";
	std::string Palindrome = "abcdcba";

	if (IsPalindrome(Palindrome)) {
		std::cout << std::endl << "> Worked : Palindrome : " << Palindrome;
	} else {
		std::cout << std::endl << "> Didn't Work : Palindrome : " << Palindrome;
	}


	//Longest Palindrome in String Program
	std::cout << "\n\nLongest Palindrome in String Program";
	std::string xString = "abbbbabcbacddsa";
	Palindrome = LongestPalindromeInString(xString);

	if (Palindrome == "abcba") {
		std::cout << std::endl << "> Worked : Longest Palindrome : "
													<< Palindrome;
	} else {
		std::cout << std::endl << "> Didn't Work : No Palindrome in String : "
													<< Palindrome;
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
	std::vector <int> myVector (myArray, myArray +
									sizeof(myArray) / sizeof(myArray[0]));
	myVector = TwoSum(myVector, goalNumber);
	int theSum = myVector[0] + myVector[1];

	if (theSum == goalNumber) {
		std::cout << std::endl << "> Worked : " << theSum << " == "
				  << goalNumber
				  << " : "<< myVector[0] << " + " << myVector[1];
	} else {
		std::cout << std::endl << "> Didn't Work : " << theSum << " == "
				  << goalNumber << " : "<< myVector[0] << " + " << myVector[1];
	}


	//Median Of Two Sorted Arrays Program
	std::cout << "\n\nMedian Of Two Sorted Arrays Program";
	const int ARR_SIZE_ONE = 2;
	const int ARR_SIZE_TWO = 2;
	const int myArrayOne[ARR_SIZE_ONE] = {1,2};
	const int myArrayTwo[ARR_SIZE_TWO] = {3,4};
	float goalMedian = 2.5;
	float returnMedian = MedianOfTwoSortedArrays(myArrayOne, myArrayTwo,
												 ARR_SIZE_ONE, ARR_SIZE_TWO);

	if (returnMedian == goalMedian) {
		std::cout << std::endl << "> Worked : " << returnMedian
							   << " == " << goalMedian;
	} else {
		std::cout << std::endl << "> Didn't Work : " << returnMedian
				  	  	  	   << " == " << goalMedian;
	}


	//Climb Stairs Program
	std::cout << "\n\nClimb Stairs Program";
	int numberOfStairs = 3;
	int expectedReturn = 3;
	int possibleWaysToClimb = ClimbStairs(numberOfStairs);

	if (possibleWaysToClimb == expectedReturn) {
		std::cout << std::endl << "> Worked : " << possibleWaysToClimb
							   << " == " << expectedReturn;
	} else {
		std::cout << std::endl << "> Didn't Work : " << possibleWaysToClimb
							   << " == " << expectedReturn;
	}


	//Count Primes Program
	std::cout << "\n\nCount Primes Program";
	int number = 9;
	    expectedReturn = 4;
	int numberOfPrimes = CountPrimes(number);

	if (numberOfPrimes == expectedReturn) {
		std::cout << std::endl << "> Worked : " << numberOfPrimes
							   << " == " << expectedReturn;
	} else {
		std::cout << std::endl << "> Didn't Work : " << numberOfPrimes
							   << " == " << expectedReturn;
	}

	//Can Jump Program
	std::cout << "\n\nCan Jump Program";
	const int myArrayTrue[]  = {2,3,1,1,4};
	const int myArrayFalse[] = {3,2,1,0,4};
	std::vector <int> numStepTrue(myArrayTrue, myArrayTrue +
								sizeof(myArrayTrue) / sizeof(myArrayTrue[0]));
	std::vector <int> numStepFalse(myArrayFalse, myArrayFalse +
								sizeof(myArrayFalse) / sizeof(myArrayFalse[0]));
	bool canJumpTrue  = CanJump(numStepTrue);
	bool canJumpFalse = CanJump(numStepFalse);

	if (canJumpTrue == true && canJumpFalse == false) {
		std::cout << std::endl << "> Worked : " << canJumpTrue
				  	  	  	  	  	  	  	 	<< " == " << true;
		std::cout << std::endl << "> Worked : " << canJumpFalse
												<< " == " << false;
	} else {
		std::cout << std::endl << "> Didn't Worked : " << canJumpTrue
													   << " == " << true;
		std::cout << std::endl << "> Didn't Worked : " << canJumpFalse
													   << " == " << false;
	}

	//Fizz Buzz Program
	std::cout << "\n\nFizz Buzz Program";
	int fizbizNumb = 15;
	const std::string myArrayFizBiz[]  = {"1", "2", "Fizz", "4", "Buzz",
										  "Fizz", "7", "8", "Fizz", "Buzz",
										  "11", "Fizz", "13", "14", "FizzBuzz"};
	std::vector <string> correctFizBiz(myArrayFizBiz, myArrayFizBiz +
							sizeof(myArrayFizBiz) / sizeof(myArrayFizBiz[0]));
	std::vector <std::string> returnFizBiz  = fizzBuzz(fizbizNumb);

	if (correctFizBiz == returnFizBiz) {
		std::cout << std::endl << "> Worked : ";

	} else {
		std::cout << std::endl << "> Didn't Worked : ";
	}
	for(int index = 0; index < fizbizNumb; index++) {
		std::cout << std::endl << std::setw(2) << index+1 << " : "
				  << returnFizBiz[index] << " == "  << correctFizBiz[index];
	}


	//Power Of Three Program
	std::cout << "\n\nPower Of Three Program";
	int numberForPower = 9;
	bool expectReturnForPower = true;
	bool returnFromPowerOf3 = isPowerOfThree(numberForPower);

	if (returnFromPowerOf3 == expectReturnForPower) {
		std::cout << std::endl << "> Worked : " << returnFromPowerOf3
							   << " == " << expectReturnForPower;
	} else {
		std::cout << std::endl << "> Didn't Work : " << returnFromPowerOf3
							   << " == " << expectReturnForPower;
	}

	//Reverse Bits Program
	std::cout << "\n\nReverse Bits Program";
	uint32_t expectedReverseBits = 964176192;
	uint32_t returnReverseBits = reverseBits(43261596);

	if (returnReverseBits == expectedReverseBits) {
		std::cout << std::endl << "> Worked : " << returnReverseBits
							   << " == " << expectedReverseBits;
	} else {
		std::cout << std::endl << "> Didn't Work : " << returnReverseBits
							   << " == " << expectedReverseBits;
	}

	//Reverse Int Program
	std::cout << "\n\nReverse Int Program";
	uint32_t expectedReverseInt = 321;
	uint32_t returnReverseInt = ReverseInt(123);

	if (returnReverseInt == expectedReverseInt) {
		std::cout << std::endl << "> Worked : " << returnReverseInt
							   << " == " << expectedReverseInt;
	} else {
		std::cout << std::endl << "> Didn't Work : " << returnReverseInt
							   << " == " << expectedReverseInt;
	}

	//Reverse String Program
	std::cout << "\n\nReverse String Program";
	std::string expectedReverseStrng = "olleh";
	std::string returnReverseString = ReverseString("hello");

	if (returnReverseString == expectedReverseStrng) {
		std::cout << std::endl << "> Worked : " << returnReverseString
							   << " == " << expectedReverseStrng;
	} else {
		std::cout << std::endl << "> Didn't Work : " << returnReverseString
							   << " == " << expectedReverseStrng;
	}

	//Single Number Program
	std::cout << "\n\nSingle Number Program";
	int expectedOutNum = 5;
	const int inputArray[] = {3,2,3,1,5,4,1,2,4};
	std::vector <int> inputVector(inputArray, inputArray +
									sizeof(inputArray) / sizeof(inputArray[0]));
	int returnNum = SingleNumber(inputVector);

	if (returnNum == expectedOutNum) {
		std::cout << std::endl << "> Worked : " << returnNum
				  	  	  	  	  	  << " == " << expectedOutNum;
	} else {
		std::cout << std::endl << "> Didn't Worked : " << returnNum
										     << " == " << expectedOutNum;
	}

	//Unique Paths Program
	std::cout << "\n\nUnique Paths Program";
	int expectedUnquiePath= 5;

	int returnUniquePath = UniquePaths(1,2);

	if (returnUniquePath == expectedUnquiePath) {
		std::cout << std::endl << "> Worked : " << returnUniquePath
				  	  	  	  	  	  << " == " << expectedUnquiePath;
	} else {
		std::cout << std::endl << "> Didn't Worked : " << returnUniquePath
										     << " == " << expectedUnquiePath;
	}


/****************************************************************************
 * 							Hacker Rank Programs
 ****************************************************************************/

	//HK_ Basic Data Types Program
	std::cout << "\n\nHK_ Basic DataT ypes Program";
	const int    integerNum = 3;
	const long   longNum	= 12345678912345;
	const char   charChar 	= 'a';
	const float  floatNum 	= 334.239990;
	const double doubleNum 	= 14049.30493;

	std::string returnHK_BasicDataType = HK_BasicDataTypes(integerNum,
			     	 	 	 	 	 	 	 	 	 	   longNum,
														   charChar,
														   floatNum,
														   doubleNum);

	std::string expectedHK_BasicDataTypes
									= "3 12345678912345 a 334.239990 14049.304930";

	if (returnHK_BasicDataType == expectedHK_BasicDataTypes) {
		std::cout << std::endl << "> Worked : " << returnHK_BasicDataType
				  	  	  	  	  	  << " == " << expectedHK_BasicDataTypes;
	} else {
		std::cout << std::endl << "> Didn't Worked : "
										<< returnHK_BasicDataType
										<< " == " << expectedHK_BasicDataTypes;
	}


	//HK_ input And Output Program
	std::cout << "\n\nHK_ input And Output Program";

	int returnHK_inputAndOutput = HK_inputAndOutput(2,3,4);

	int expectedHK_inputAndOutput = 9;

	if (returnHK_inputAndOutput == expectedHK_inputAndOutput) {
		std::cout << std::endl << "> Worked : " << returnHK_inputAndOutput
				  	  	  	  	  	  << " == " << expectedHK_inputAndOutput;
	} else {
		std::cout << std::endl << "> Didn't Worked : "
										<< returnHK_inputAndOutput
										<< " == " << expectedHK_inputAndOutput;
	}

	//HK_ConditionalStatement Program
	std::cout << "\n\nHK_ Conditional Statement Program";

	std::string returnHK_CondiSM = HK_ConditionalStatement(5);

	std::string expectedHK_CondiSM  = "five";

	if (returnHK_CondiSM == expectedHK_CondiSM) {
		std::cout << std::endl << "> Worked : " << returnHK_CondiSM
				  	  	  	  	  	  << " == " << expectedHK_CondiSM;
	} else {
		std::cout << std::endl << "> Didn't Worked : "
										<< returnHK_CondiSM
										<< " == " << expectedHK_CondiSM;
	}

	//HK_ Array Intro Program
	std::cout << "\n\nHK_ Array Intro Program";

	const int HR_ARRAY_INTRO_SIZE = 4;
	bool checkIfSame = true;

	int myHK_ArrayIntro[HR_ARRAY_INTRO_SIZE] = {1,4,3,2};

	int * returnHK_ArrayIntro = HK_ArrayIntro(myHK_ArrayIntro, HR_ARRAY_INTRO_SIZE);

	int expectedHK_ArrayIntro[HR_ARRAY_INTRO_SIZE]  = {2,3,4,1};

	for (int index = 0; index < HR_ARRAY_INTRO_SIZE; index++) {
		if(returnHK_ArrayIntro[index] != expectedHK_ArrayIntro[index]) {
			checkIfSame = false;
		}
	}

	if (checkIfSame) {
		std::cout << std::endl << "> Worked : ";
	} else {
		std::cout << std::endl << "> Didn't Worked : ";
	}

	for (int index = 0; index < HR_ARRAY_INTRO_SIZE; index++) {
		std::cout << std:: endl;
		std::cout << returnHK_ArrayIntro[index] << " == "
				  << expectedHK_ArrayIntro[index];
	}


	//HK_ For Loop Program
	std::cout << "\n\nHK_ For Loop Program";

	std::string returnHK_ForLoop = HK_ForLoop(5,2);

	std::string expectedHK_ForLoop  = "five\nodd\ntwo\neven\n";

	if (returnHK_ForLoop == expectedHK_ForLoop) {
		std::cout << std::endl << "> Worked : " << returnHK_ForLoop
				  	  	  	  	  	  << " == " << expectedHK_ForLoop;
	} else {
		std::cout << std::endl << "> Didn't Worked : "
										<< returnHK_ForLoop
										<< " == " << expectedHK_ForLoop;
	}

	return 0;
}
