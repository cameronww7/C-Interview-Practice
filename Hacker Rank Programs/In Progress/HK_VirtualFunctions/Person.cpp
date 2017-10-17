/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 *
 *
 *************************************************************************/

#include "Person.h"

namespace hkVirtualFunction {

Person::Person() {
	mName = "n/a";
	mAge  = -1;
}

Person::~Person() {
	// TODO Auto-generated destructor stub
}


void Person::getdata() {
	cout << "\n> Please enter name: ";
	cin >> mName;

	cout << "\n> Please enter age: ";
	cin >> mAge;
}

}
