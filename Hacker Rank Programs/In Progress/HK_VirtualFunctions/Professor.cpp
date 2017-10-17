/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 *
 *
 *************************************************************************/

#include "Professor.h"

namespace hkVirtualFunction {

Professor::Professor() {
	mPublications = -1;
	mCur_ID 	  = -1;
}

Professor::~Professor() {
	// TODO Auto-generated destructor stub
}

void Professor::getdata() {
	cout << "\n> Please enter Publications: ";
	cin >> mPublications;

	cout << "\n> Please enter Cur_ID: ";
	cin >> mCur_ID;
}

}
