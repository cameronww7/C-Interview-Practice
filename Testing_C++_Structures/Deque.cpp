/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal : First in First Out
 *
 *************************************************************************/

#include "../src/header.h"
#include <deque>

namespace {
	void displayObject(std::deque<std::string> & displayMe) {
		std::cout << "> ";
		for(std::string s : displayMe) {
			std::cout << s << ' ';
		}
		std::cout << std::endl;
	}
}


void Deques(void) {
    std::deque<std::string> dequeString;

	/**************************************************************************
	 * Deque or Double end Queue
	 *************************************************************************/
    std::cout << "\n> push_back values: " << std::endl;
    dequeString.push_back("one");
    dequeString.push_back("two");
    dequeString.push_back("three");
    dequeString.push_back("four");
    dequeString.push_back("five");
    dequeString.push_back("six");
    dequeString.push_back("seven");
    dequeString.push_back("eight");
    dequeString.push_back("nine");
    dequeString.push_back("ten");

    std::cout << "> size: "  << dequeString.size()  << std::endl;
    std::cout << "> front: " << dequeString.front() << std::endl;
    std::cout << "> back: "  << dequeString.back()  << std::endl << std::endl;

    displayObject(dequeString);

	/**************************************************************************
	 *  pop from front
	 *************************************************************************/
    std::cout << "\n> pop from front:" << std::endl;
    dequeString.pop_front();

    displayObject(dequeString);

	/**************************************************************************
	 *  pop from back
	 *************************************************************************/
    std::cout << "\n> pop from back:" << std::endl;
    dequeString.pop_back();

    displayObject(dequeString);

	/**************************************************************************
	 * push front
	 *************************************************************************/
    std::cout << "\n> push front:" << std::endl;
    dequeString.push_front("newfront");

    displayObject(dequeString);

	/**************************************************************************
	 * push back
	 *************************************************************************/
    std::cout << "\n> push back:" << std::endl;
    dequeString.push_back("newback");

    displayObject(dequeString);
}
