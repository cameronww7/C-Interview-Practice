/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 *
 *************************************************************************/

#include "../src/header.h"

namespace { // used so other files don't get confused
	const size_t _maxsize = 1024;

	class strsize {
		size_t _size = 0;
	public:
		// with explicit no longer will take in a 'x' which turns to its
		// acii value of 120. but with explicit errors and we must use\
		// "x" and will find correct size of 1.
		explicit strsize(const int);     // constructor: size from int
		explicit strsize(const char *);  // constructor: size from c-string
		size_t size() const;
	};

	strsize::strsize(const int n) {
		puts("\n> constructor: size from int");
		_size = (n <= _maxsize) ? n : 0;
	}

	strsize::strsize(const char * s) {
		puts("\n> constructor: size from c-string");
		for(size_t i = 0; i < _maxsize; i++) {
			if(s[i] == 0) {
				_size = i;
				return;
			}
		}
		_size = 0;
	}

	size_t strsize::size() const {
		return _size;
	}

	void func(const strsize & s) {
		printf("\n> size is %ld", s.size());
	}
} //end of anonymous namespace

void ImplicitVSExplicitConstructors(void) {
//    strsize s = 'x'; // gives an error cause it implicitly working
    strsize f("f");
//    printf("\n> size is %ld", s.size()); // part of 'x' error
//    func('x'); // part of error above
    printf("\n> size is %ld", f.size());
    func(strsize("f"));
    printf("\n> size is %ld", f.size());
}
