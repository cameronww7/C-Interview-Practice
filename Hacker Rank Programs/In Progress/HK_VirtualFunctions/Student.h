/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 *
 *
 *************************************************************************/

#ifndef HK_VIRTUALFUNCTIONS_STUDENT_H_
#define HK_VIRTUALFUNCTIONS_STUDENT_H_

#include "../../../src/header.h"
#include "Person.h"

namespace hkVirtualFunction {

class Student : Person {
public:
	Student();
	virtual ~Student();

	int getMarks()  { return mMarks[6]; }
	int getCur_ID() { return mCur_ID; }

	void setMarks (int xMarks[]) {
		for(int index = 0; index < 6; index++) {
			mMarks[index] = xMarks[index];
		}
	}
	void setCur_ID(int xCur_ID)  { mCur_ID = xCur_ID; }

	void getdata();

private:
	int mMarks[6];
	int mCur_ID;
};

}

#endif /* HK_VIRTUALFUNCTIONS_STUDENT_H_ */
