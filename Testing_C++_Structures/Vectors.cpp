/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 *
 *************************************************************************/

#include "../src/header.h"
#include <vector>
#include <utility>

namespace {
	void message(const std::string & s) {
		puts(s.c_str());
		fflush(stdout);
	}

	void disp_vector(const std::vector<std::string> & v) {
		size_t size = v.size();
		printf("> vector size: %ld\n", size);
		if(size) {
			for( std::string s : v ) {
				printf("> [%s]", s.c_str());
			}
			puts("");
		}
		fflush(stdout);
	}

	template <typename T>
	void Swap (T & a, T & b) {
		message("\n> swap()");
		T tmp(std::move(a));
		a = std::move(b);
		b = std::move(tmp);
	}
}

void Vectors(void) {
    std::vector<std::string> v1 = { "one", "two", "three", "four", "five" };
    std::vector<std::string> v2 = { "six", "seven", "eight", "nine", "ten" };
    std::vector<std::string> v3 = { "one", "two", "three", "four", "five" };
    std::vector<std::string> v4 = { "six", "seven", "eight", "nine", "ten" };

    message("\n> v1");
    disp_vector(v1);

    message("\n> v2");
    disp_vector(v2);

    v2 = std::move(v1); // empty v1 to v2, leaving v1 empty

    message("\n> v1");
    disp_vector(v1);

    message("\n> v2");
    disp_vector(v2);

    puts("\n> Now using my swap function");

    message("\n> v3");
    disp_vector(v3);

    message("\n> v4");
    disp_vector(v4);

    Swap(v3,v2); // empty v1 to v2, leaving v1 empty
//    std::swap(v3,v2); // Same as Above, just made my own to see how.

    message("\n> v3");
    disp_vector(v3);

    message("\n> v4");
    disp_vector(v4);
}
