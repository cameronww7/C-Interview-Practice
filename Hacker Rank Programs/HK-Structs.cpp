/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 * 			Input will consist of four lines.
 *
 * 			The first line will contain an integer, representing age.
 *
 * 			The second line will contain a string, consisting of lower-case
 * 			Latin characters ('a'-'z'), representing the first_name of a student.
 *
 * 			The third line will contain another string, consisting of lower-case
 * 			Latin characters ('a'-'z'), representing the last_name of a student.
 *
 * 			The fourth line will contain an integer, representing the standard
 * 			of student.
 *
 * 			Note: The number of characters in first_name and last_name will
 * 			not exceed 50.
 *
 * 			Output Format
 *
 * 			Output will be of a single line, consisting of age, first_name,
 * 			last_name and standard, each separated by one white space.
 *
 * 			P.S.: I/O will be handled by HackerRank.
 *
 * 			Sample Input
 * 			15
 * 			john
 * 			carmack
 * 			10
 *
 * 			Sample Output
 * 			15 john carmack 10
 *
 *************************************************************************/

#include "../src/header.h"


StructStudent HK_Structs(int 		 xAge,
				   	     int 		 xStandard,
				         std::string xFirstName,
				         std::string xLastName) {
	StructStudent studentOne;

    studentOne.age 		 = xAge;
    studentOne.firstName = xFirstName;
    studentOne.lastName  = xLastName;
    studentOne.standard  = xStandard;

//	std::cin << studentOne.age;
//	std::cin << studentOne.firstName;
//	std::cin << studentOne.lastName ;
//	std::cin << studentOne.standard;
//
//	std::cout << std::endl << studentOne.age;
//	std::cout << std::endl << studentOne.firstName;
//	std::cout << std::endl << studentOne.lastName ;
//	std::cout << std::endl << studentOne.standard;

    return studentOne;
}
