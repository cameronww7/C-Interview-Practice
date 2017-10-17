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

namespace std {
namespace literals {

class Student : Person {
public:
	Student();
	virtual ~Student();

	int getMarks()  { return mMarks[6]; }
	int getCur_ID() { return mCur_ID; }

	void setMarks (int xMarks[]) { mMarks[6] = xMarks;}
	void setCur_ID(int xCur_ID)  { mCur_ID = xCur_ID; }

private:
	int mMarks[6];
	int mCur_ID;
};

} /* namespace literals */
} /* namespace std */

#endif /* HK_VIRTUALFUNCTIONS_STUDENT_H_ */
