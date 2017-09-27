/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 *
 *************************************************************************/

#include "../src/header.h"
#include <list>

void Lists(void) {
	std::list<int> li1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	std::cout << "\n> size: "  << li1.size()  << std::endl;
	std::cout << "> front: " << li1.front() << std::endl;
	std::cout << "> back: "  << li1.back()  << std::endl << std::endl;

	std::cout << "> push_back 47: " << std::endl;
	li1.push_back(47);

	std::cout << "> size: "  << li1.size() << std::endl;
	std::cout << "> back() " << li1.back() << std::endl;

	/**************************************************************************
	 * range-based for loop
	 *************************************************************************/
	std::cout << "\n> range-based for loop: " << std::endl;
	std::cout << "> ";
	for(int v : li1) {
		std::cout << v << " ";
	}
	std::cout << std::endl;

	/**************************************************************************
	 * need an iterator to insert and erase
	 *************************************************************************/
	std::list<int>::iterator it1 = li1.begin();
	/**************************************************************************
	 * Insert Time
	 *************************************************************************/
	while((*++it1 != 5) && (it1 != li1.end()))  {
		// Empty While Setting Iterators to proper Locations
	}

	if (it1 != li1.end()) {
		std::cout << "\n> insert 112 before 5:" << std::endl;
		li1.insert(it1, 112);
	}

	std::cout << "> ";
	for(int v : li1) {
		cout << v << " ";
	}
	std::cout << std::endl;

	/**************************************************************************
	 * Erase Time
	 *************************************************************************/
	while((*++it1 != 7) && (it1 != li1.end())) {
		// Empty While Setting Iterators to proper Locations
	}

	if (it1 != li1.end()) {
		std::cout << "\n> erase 7:" << std::endl;
		li1.erase(it1);
	}

	/**************************************************************************
	 * Output List
	 *************************************************************************/
	std::cout << "> ";
	for(int v : li1) {
		std::cout << v << " ";
	}
	std::cout << std::endl;

	/**************************************************************************
	 * Erase 112 to 8
	 *************************************************************************/
	std::cout << "\n> erase 112 to 8:" << std::endl;
	std::list<int>::iterator it2 = it1 = li1.begin();
	while(( *++it1 != 112) && (it1 != li1.end())) {
		// Empty While Setting Iterators to proper Locations
	}

	while( ( *++it2 != 8) && (it2 != li1.end())) {
		// Empty While Setting Iterators to proper Locations
	}

	if (it1 != li1.end() && it2 != li1.end()) {
		li1.erase(it1, it2);
		std::cout << "> ";
		for(int v : li1) {
			cout << v << " ";
		}
		std::cout << std::endl << std::endl;
	}
}
