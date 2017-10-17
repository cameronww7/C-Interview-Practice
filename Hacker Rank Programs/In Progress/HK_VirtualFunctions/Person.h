/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 *
 *
 *************************************************************************/

#ifndef HK_VIRTUALFUNCTIONS_PERSON_H_
#define HK_VIRTUALFUNCTIONS_PERSON_H_

#include "../../../src/header.h"

namespace hkVirtualFunction {

class Person {
public:
	Person();
	virtual ~Person();

	int    getAge()  { return mAge; }
	string getName() { return mName; }

	virtual void setAge (int xAge)     { mAge  = xAge; }
	virtual void setName(string xName) { mName = xName; }

	virtual void getdata();

private:
	int    mAge;
	string mName;
};

}


#endif /* HK_VIRTUALFUNCTIONS_PERSON_H_ */
