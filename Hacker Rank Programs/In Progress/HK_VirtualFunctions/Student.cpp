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
	cout << "\n> Please enter 6 Marks: ";
	for(int index = 0; index < 6; index ++) {
		cin >> mMarks[index];
	}

	cout << "\n> Please enter Cur_ID: ";
	cin >> mCur_ID;
}


}
