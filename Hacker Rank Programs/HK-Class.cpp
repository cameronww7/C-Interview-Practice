/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 * 			Input Format
 *
 * 			Input will consist of four lines.
 *
 * 			The first line will contain an integer, representing the age.
 * 			The second line will contain a string, consisting of lower-case
 * 			Latin characters ('a'-'z'), representing the first_name of a student.
 *
 * 			The third line will contain another string, consisting of
 * 			lower-case Latin characters ('a'-'z'), representing the last_name
 * 			of a student.
 *
 * 			The fourth line will contain an integer, representing the standard
 * 			of student.
 *
 * 			Note: The number of characters in first_name and last_name will
 * 			not exceed 50.
 *
 * 			Output Format
 *
 * 			The code provided by HackerRank will use your class members to
 * 			set and then get the elements of the Student class.
 *
 * 			Sample Input
 * 			15
 * 			john
 * 			carmack
 * 			10
 *
 * 			Sample Output
 * 			15
 * 			carmack, john
 * 			10
 *
 * 			15,john,carmack,10
 *
 *************************************************************************/

#include "../src/header.h"

class ClassStudent {
public:
	ClassStudent() {mAge       = 0;
					mStandard  = 0;
					mFirstName = "0";
					mLastName  = "0";};

	void settAge 	  (int xAge) 			   {mAge = xAge;};
	void setStandard  (int xStandard) 		   {mStandard = xStandard;};
	void setFirstName (std::string xFirstName) {mFirstName = xFirstName;};
	void setLastName  (std::string xLastName)  {mLastName = xLastName ;};

	int getAge () {return mAge;};
	int getStandard () {return mStandard;};
	std::string getFirstName () {return mFirstName;};
	std::string getLastName () {return mLastName;};

	std::string to_strings() {return to_string(mAge) + "," + mFirstName +
			"," + mLastName + "," + to_string(mStandard);};
private:
	int mAge;
	int mStandard;
	std::string mFirstName;
	std::string mLastName;
};

std::string HK_Class(int 		 xAge,
  	     	 	 	 int 		 xStandard,
					 std::string xFirstName,
					 std::string xLastName) {
//    cin >> xAge >> xFirstName >> xLastName >> xStandard;

    ClassStudent st;
    st.settAge(xAge);
    st.setStandard(xStandard);
    st.setFirstName(xFirstName);
    st.setLastName(xLastName);

//    cout << st.getAge() << "\n";
//    cout << st.getLastName() << ", " << st.getFirstName() << "\n";
//    cout << st.getStandard() << "\n";
//    cout << "\n";
//    cout << st.to_string();

    return st.to_strings();
}
