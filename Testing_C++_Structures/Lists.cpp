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
	std::list<int> listInteger = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	std::cout << "\n> size: " << listInteger.size()  << std::endl;
	std::cout << "> front: "  << listInteger.front() << std::endl;
	std::cout << "> back: "   << listInteger.back()  << std::endl << std::endl;

	std::cout << "> push_back 47: " << std::endl;
	listInteger.push_back(47);

	std::cout << "> size: "  << listInteger.size() << std::endl;
	std::cout << "> back() " << listInteger.back() << std::endl;

	/**************************************************************************
	 * range-based for loop
	 *************************************************************************/
	std::cout << "\n> range-based for loop: " << std::endl;
	std::cout << "> ";
	for(int v : listInteger) {
		std::cout << v << " ";
	}
	std::cout << std::endl;

	/**************************************************************************
	 * need an iterator to insert and erase
	 *************************************************************************/
	std::list<int>::iterator it1 = listInteger.begin();
	/**************************************************************************
	 * Insert Time
	 *************************************************************************/
	while((*++it1 != 5) && (it1 != listInteger.end()))  {
		// Empty While Setting Iterators to proper Locations
	}

	if (it1 != listInteger.end()) {
		std::cout << "\n> insert 112 before 5:" << std::endl;
		listInteger.insert(it1, 112);
	}

	std::cout << "> ";
	for(int v : listInteger) {
		std::cout << v << " ";
	}
	std::cout << std::endl;

	/**************************************************************************
	 * Erase Time
	 *************************************************************************/
	while((*++it1 != 7) && (it1 != listInteger.end())) {
		// Empty While Setting Iterators to proper Locations
	}

	if (it1 != listInteger.end()) {
		std::cout << "\n> erase 7:" << std::endl;
		listInteger.erase(it1);
	}

	/**************************************************************************
	 * Output List
	 *************************************************************************/
	std::cout << "> ";
	for(int v : listInteger) {
		std::cout << v << " ";
	}
	std::cout << std::endl;

	/**************************************************************************
	 * Erase 112 to 8
	 *************************************************************************/
	std::cout << "\n> erase 112 to 8:" << std::endl;
	std::list<int>::iterator it2 = it1 = listInteger.begin();
	while(( *++it1 != 112) && (it1 != listInteger.end())) {
		// Empty While Setting Iterators to proper Locations
	}

	while( ( *++it2 != 8) && (it2 != listInteger.end())) {
		// Empty While Setting Iterators to proper Locations
	}

	if (it1 != listInteger.end() && it2 != listInteger.end()) {
		listInteger.erase(it1, it2);
		std::cout << "> ";
		for(int v : listInteger) {
			std::cout << v << " ";
		}
		std::cout << std::endl << std::endl;
	}
}
