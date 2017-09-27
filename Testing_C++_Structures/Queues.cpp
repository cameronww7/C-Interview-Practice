/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 *
 *************************************************************************/

#include "../src/header.h"
#include <list>
#include <queue>

void Queues(void) {
    std::cout << "initialize stack from list:" << std::endl;
    std::list<int> listIntegers = { 1, 2, 3, 4, 5 };
    std::queue<int, std::list<int>> queueIntegers(listIntegers); // constructor copies to new list

    std::cout << "> listIntegers has " << listIntegers.size()
    		  << " entries; queueIntegers has " << queueIntegers.size() << " entries." << std::endl;

	/**************************************************************************
	 * pop all from queueIntegers
	 *************************************************************************/
    std::cout << "\n> pop all from queueIntegers:" << std::endl;
    std::cout << "> ";
    while(!queueIntegers.empty()) {
    	std::cout << queueIntegers.front() << " ";
    	queueIntegers.pop();
    }
    std::cout << std::endl;

    std::cout << "\n> listIntegers has " << listIntegers.size()
    		  << " entries; queueIntegers has " << queueIntegers.size() << " entries." << std::endl;

	/**************************************************************************
	 * contents of listIntegers after queueIntegers is emptied
	 *************************************************************************/
    std::cout << "\n> contents of listIntegers after queueIntegers is emptied:" << std::endl;
    std::cout << "> ";
    for( int i : listIntegers ) {
    	std::cout << i << ' ';
    }
    std::cout << std::endl;

	/**************************************************************************
	 * push strings onto stringQueue
	 *************************************************************************/
    std::queue<std::string> stringQueue;	// default stack uses deque object
    std::cout << "\n> push strings onto stringQueue:" << std::endl;
    stringQueue.push("one");
    stringQueue.push("two");
    stringQueue.push("three");
    stringQueue.push("four");
    stringQueue.push("five");

    std::cout << "> size of stringQueue: " << stringQueue.size() << std::endl;

	/**************************************************************************
	 * pop all from stringQueue
	 *************************************************************************/
    std::cout << "\n> pop all from stringQueue:" << std::endl;
    std::cout << "> ";
    while(!stringQueue.empty()) {
        std::cout << stringQueue.front() << " ";
        stringQueue.pop();
    }
    std::cout << std::endl;

    std::cout << "\n> size of stringQueue: " << stringQueue.size() << std::endl;
}
