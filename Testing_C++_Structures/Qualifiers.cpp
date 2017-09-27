/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 *			const 		- 	static		// stored until program termination
 *										// to keep state
 *
 *			volatile 	- 	register	// asked to be stored in register
 *										// for threaded, may or may not be
 *										// stored in a register
 *
 *			mutable		- 	extern		// could be used by another block
 *
 *
 *************************************************************************/

#include "../src/header.h"

namespace { // used so other files don't get confused
	class S {
	public:
		int static_value() {
			static int x = 7;
			return ++x;
		}
	};

	int func() {
		int x = 7;
		return ++x;
	}
}

void Qualifiers(void) {
    int i = 42;
    i = 149;
    printf("The integer is %d\n", i);
    func();
    printf("The integer is %d\n", func());
}


