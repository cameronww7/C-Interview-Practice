/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal : First in First Out
 *
 *************************************************************************/

#include "../src/header.h"
#include <deque>

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

	/**************************************************************************
	 * access deque with iterator
	 *************************************************************************/
    std::cout << "> ";
    for(std::string s : dequeString) {
    	std::cout << s << ' ';
    }
    std::cout << std::endl;

	/**************************************************************************
	 *  pop from front
	 *************************************************************************/
    std::cout << "\n> pop from front:" << std::endl;
    dequeString.pop_front();

    std::cout << "> ";
    for(std::string s : dequeString) {
    	std::cout << s << ' ';
    }
    std::cout << std::endl;

	/**************************************************************************
	 *  pop from back
	 *************************************************************************/
    std::cout << "\n> pop from back:" << std::endl;
    dequeString.pop_back();

    std::cout << "> ";
    for(std::string s : dequeString) {
    	std::cout << s << ' ';
    }
    std::cout << std::endl;

	/**************************************************************************
	 * push front
	 *************************************************************************/
    std::cout << "\n> push front:" << std::endl;
    dequeString.push_front("newfront");

    std::cout << "> ";
    for(std::string s : dequeString) {
    	std::cout << s << ' ';
    }
    std::cout << std::endl;

	/**************************************************************************
	 * push back
	 *************************************************************************/
    std::cout << "\n> push back:" << std::endl;
    dequeString.push_back("newback");

    std::cout << "> ";
    for(std::string s : dequeString) {
    	std::cout << s << ' ';
    }
    std::cout << std::endl;
}
