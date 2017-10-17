/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 *
 *
 *************************************************************************/

#ifndef HK_VIRTUALFUNCTIONS_PROFESSOR_H_
#define HK_VIRTUALFUNCTIONS_PROFESSOR_H_

#include "../../../src/header.h"
#include "Person.h"

namespace std {
namespace literals {

class Professor {
public:
	Professor();
	virtual ~Professor();

	int getPublications()  { return mPublications; }
	int getCur_ID() { return mCur_ID; }

	void setPublications(int xPublications) { mPublications = xPublications;}
	void setCur_ID(int xCur_ID)  { mCur_ID = xCur_ID; }


private:
	int mPublications;
	int mCur_ID;
};

} /* namespace literals */
} /* namespace std */

#endif /* HK_VIRTUALFUNCTIONS_PROFESSOR_H_ */
