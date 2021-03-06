/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 * 			A class defines a blueprint for an object. We use the same
 * 			syntax to declare objects of a class as we use to declare
 * 			variables of other basic types. For example:
 *
 * 			Box box1;          // Declares variable box1 of type Box
 * 			Box box2;          // Declare variable box2 of type Box
 *
 * 			Kristen is a contender for valedictorian of her high school.
 * 			She wants to know how many students (if any) have scored
 * 			higher than her in the  exams given during this semester.
 *
 * 			Create a class named  with the following specifications:
 *
 * 			An instance variable named  to hold a student's  exam scores.
 * 			A void input() function that reads  integers and saves them to .
 * 			An int calculateTotalScore() function that returns the sum of
 * 			the student's scores.
 *
 * 			Input Format
 *
 * 			Most of the input is handled for you by the locked code in the
 * 			editor.
 *
 * 			In the void Student::input() function, you must read  scores
 * 			from stdin and save them to your instance variable.
 *
 * 			Output Format
 *
 * 			In the int Student::calculateTotalScore() function, you must
 * 			return the student's total grade (the sum of the values in ).
 *
 * 			The locked code in the editor will determine how many scores are
 * 			larger than Kristen's and print that number to the console.
 *
 * 			Sample Input
 *
 * 			The first line contains n,n the number of students in Kristen's
 * 			class. The n subsequent lines contain each student's 5 exam grades
 * 			for this semester.
 *
 * 			3
 * 			30 40 45 10 10
 * 			40 40 40 10 10
 * 			50 20 30 10 10
 *
 * 			Sample Output
 *
 * 			1
 *
 * 			Explanation
 *
 * 			Kristen's grades are on the first line of grades. Only 1 student
 * 			scored higher than her.
 *
 *************************************************************************/

#include "../src/header.h"

namespace {

class ClassStudentObjects {
public:
	ClassStudentObjects() {mScoreSum = 0;};

	void setScores (int xScores) {mScoreSum = xScores;};

	int getScores () {return mScoreSum;};

	void input() {
		for(int index = 0; index < 5; index++) {
			std::cin >> myScrores[index];
		}
	};

	void inputPassed(int exam1,int exam2,int exam3,int exam4,int exam5) {
		myScrores[0] = exam1;
		myScrores[1] = exam2;
		myScrores[2] = exam3;
		myScrores[3] = exam4;
		myScrores[4] = exam5;
	}

	int SumScores() {
		for(int index = 0; index < 5; index++) {
			mScoreSum = mScoreSum + myScrores[index];
		}
		return mScoreSum;
	};

private:
	int mScoreSum;
	int myScrores[5] = {0,0,0,0,0};
};
} // end of Anonymous Namespace

int HK_ClassesAndObjects() {
	int returnInt = 0;

	int numberOfStudents = 3;

	ClassStudentObjects students[3];

	students[0].inputPassed(30, 40, 45, 10, 10);
	students[1].inputPassed(40, 40, 40, 10, 10);
	students[2].inputPassed(50, 20, 30, 10, 10);

	students[0].SumScores();
	students[1].SumScores();
	students[2].SumScores();

	if(students[0].getScores() > students[1].getScores()) {
		if(students[0].getScores() < students[2].getScores()) {
			returnInt++;
		}
	} else if (students[0].getScores() > students[2].getScores()) {
		returnInt++;
	}

	return returnInt;
}
