/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 *
 *************************************************************************/

#include "../src/header.h"
#include <list>
#include <stack>

void Stacks(void) {
    std::cout << "initialize stack from list:" << std::endl;
    std::list<int> listInteger = { 1, 2, 3, 4, 5 };
    std::stack<int, std::list<int>> stackInteger(listInteger);	// constructor copies to new list

    std::cout << "> listInteger has " << listInteger.size() << " entries; listInteger has "
    		  << stackInteger.size() << " entries." << std::endl;

	/**************************************************************************
	 * pop all from listInteger
	 *************************************************************************/
    std::cout << "\n> pop all from listInteger:" << std::endl;
    std::cout << "> ";
    while(!stackInteger.empty()) {
    	std::cout << stackInteger.top() << " ";
    	stackInteger.pop();
    }
    std::cout << std::endl;

    std::cout << "\n> listInteger has " << listInteger.size() << " entries; listInteger has "
    		  << stackInteger.size() << " entries." << std::endl;

	/**************************************************************************
	 * contents of listInteger after stackInteger is emptied
	 *************************************************************************/
    std::cout << "\n> contents of listInteger after stackInteger is emptied:" << std::endl;
    std::cout << "> ";
    for( int i : listInteger ) {
    	std::cout << i << ' ';
    }
    std::cout << std::endl;

	/**************************************************************************
	 * push strings onto stringStack:
	 *************************************************************************/
    std::stack<std::string> stringStack;	// default stack uses deque object
    std::cout << "\n> push strings onto stringStack:" << std::endl;
    stringStack.push("one");
    stringStack.push("two");
    stringStack.push("three");
    stringStack.push("four");
    stringStack.push("five");

    std:: cout << "> size of stringStack: " << stringStack.size() << std::endl;

	/**************************************************************************
	 * pop all from stringStack
	 *************************************************************************/
    std::cout << "\n> pop all from stringStack:" << std::endl;
    std::cout << "> ";
    while(!stringStack.empty()) {
        std::cout << stringStack.top() << " ";
        stringStack.pop();
    }
    std::cout << std::endl;

    std::cout << "\n> size of stringStack: " << stringStack.size() << std::endl;
}
