/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 *
 *************************************************************************/

#include "../src/header.h"
#include <map>

void Maps(void) {
	std::cout << "> map of strings from initializer list:" << std::endl;
	std::map<string, string> strmap = { { "George", "Father" }, { "Ellen", "Mother" },
		{ "Ruth", "Daughter" }, { "Spike", "Neighbor's Son" } };

	std::cout << "> size is "   << strmap.size() << std::endl;
	std::cout << "> get some values:" << std::endl;
	std::cout << "> George is " << strmap["George"] << std::endl;
	std::cout << "> Ellen is "  << strmap.at("Ellen") << std::endl;
	std::cout << "> Spike is "  << strmap.find("Spike")->second << std::endl;
	std::cout << endl;

	/**************************************************************************
	 * loop through the Map
	 *************************************************************************/
	std::cout << "> loop through the set:" << std::endl;
	for( auto p : strmap ) {
		std::cout << "> " << p.first << " is " << p.second << std::endl;
	}
	std::cout << std::endl;

	/**************************************************************************
	 * insert an element
	 *************************************************************************/
	std::cout << "> insert an element: Luke, Neighbor" << std::endl;
	strmap.insert( { "Luke", "Neighbor" } );
	std::cout << std::endl;

	/**************************************************************************
	 * inserted - size is
	 *************************************************************************/
	std::cout << "> inserted - size is " << strmap.size() << std::endl;
	for( auto p : strmap ) {
		std::cout << "> " << p.first << " is " << p.second << std::endl;
	}
	std::cout << std::endl;

	/**************************************************************************
	 * insert a duplicate
	 *************************************************************************/
	std::cout << "> insert a duplicate:" << std::endl;
	auto rp = strmap.insert( { "Luke", "Neighbor" } );
	if (rp.second) {
		std::cout << "> insert succeeded: " << rp.first->first << " is " << rp.first->second << std::endl;
	} else {
		std::cout << "> insert failed" << std::endl;
	}

	/**************************************************************************
	 * range-based for loop
	 *************************************************************************/
	std::cout << "\n> after insert size is " << strmap.size() << std::endl;
	for( auto p : strmap ) {
		std::cout << "> " << p.first << " is " << p.second << std::endl;
	}
	std::cout << std::endl;

	/**************************************************************************
	 * find and erase an element
	 *************************************************************************/
	std::cout << "> find and erase an element:" << std::endl;
	auto it = strmap.find("Spike");
	if(it != strmap.end()) {
		std::cout << "> found " << it->first << ":" << it->second << std::endl;
		strmap.erase(it);
		std::cout << "> erased - size is " << strmap.size() << std::endl;
	} else {
		std::cout << "> not found" << std::endl;
	}

	/**************************************************************************
	 * Display Map
	 *************************************************************************/
	std::cout << std::endl;
	for( auto p : strmap ) {
		std::cout << "> " << p.first << " is " << p.second << std::endl;
	}
	std::cout << std::endl;
}
