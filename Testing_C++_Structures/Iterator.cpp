/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 *
 *************************************************************************/

#include "../src/header.h"

void Iterator(void) {
	std::vector<int> vi1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	std::vector<int>::iterator it;   // vector iterator

	/**************************************************************************
	 * input iterator
	 *************************************************************************/
    std::cout << "\n> input iterator:" << std::endl;
    std::cout << "> ";
    for(it = vi1.begin(); it < vi1.end(); ++it) {
    	std::cout << *it << " ";
    }
    std::cout << endl;

	/**************************************************************************
	 *  save start and end points
	 *************************************************************************/
    std::vector<int>::iterator start = vi1.begin();
    std::vector<int>::iterator end = vi1.end();

	/**************************************************************************
	 * output iterator
	 *************************************************************************/
    std::cout << "\n> output iterator:" << std::endl;
    std::cout << "> ";
    for(it = start; it < end; it++) {
    	std::cout << ++(*it) << " ";
        --(*it);
    }
    std::cout << std::endl;

	/**************************************************************************
	 * forward iterator allows re-iteration of same set with same results
	 *************************************************************************/
    std::cout << "\n> forward iterator:" << std::endl;
    std::cout << "> ";
    for(it = start; it < end; ++it) {
    	std::cout << *it << " ";
    }
    for(it = start; it < end; ++it) {
    	std::cout << *it << " ";
    }
    std::cout << std::endl;


	/**************************************************************************
	 *  bidirectional iterator -- iterate forward or backward allows it--
	 *************************************************************************/
    // bidirectional iterator -- iterate forward or backward
    // allows it--
    std::cout << "\n> bidirectional iterator:" << std::endl;
    std::cout << "> ";
    for(it = end - 1; it >= start; --it) {
    	std::cout << *it << " ";
    }
    std::cout << std::endl;

	/**************************************************************************
	 *  random access iterator allows += and -= access
	 *************************************************************************/
    std::cout << "\n> random access iterator:" << std::endl;
    std::cout << "> ";
    it = start + 7;
    std::cout << *it << " ";
    it -= 3;
    std::cout << *it << " ";
    it += 4;
    std::cout << *it << " ";
    std::cout << vi1[5] << " ";
    std::cout << std::endl;
}


