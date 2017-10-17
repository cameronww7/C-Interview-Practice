/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 *
 *
 *************************************************************************/

#include "Student.h"

namespace hkVirtualFunction {

Student::Student() {
	for(int index = 0; index < 6; index++) {
		mMarks[index] = 0;
	}
	mCur_ID = 0;
}

Student::~Student() {
	// TODO Auto-generated destructor stub
}

void Student::getdata() {
	Person::getdata();
	cout << "\n> Please enter 6 Marks: ";
	for(int index = 0; index < 6; index ++) {
		cin >> mMarks[index];
	}

	cout << "\n> Please enter Cur_ID: ";
	cin >> mCur_ID;
}

void Student::setThisClass () {
	for(int index = 0; index < 6; index++) {
		mMarks[index] = index+3;
	}
	mCur_ID = 1;
	this->setAge(1);
	this->setName("Cam");
}

void Student::displayMe() {
	std::cout << "\n> name:  " << Person::getName();
	std::cout << "\n> Age:   " << Person::getAge();
	std::cout << "\n> marks: ";
	for(int index = 0; index < 6; index++) {
		std::cout << mMarks[index] << ", ";
	}
	std::cout << "\n> mCur_ID: " << mCur_ID;
}


}
