/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 * 			A drone begins flying aimlessly, starting at the origin, (0,0).
 * 			At each time step, the drone flies one meter in a random
 * 			direction, either north, east, south, or west, with equal
 * 			probability. How far will the drone be from the origin after
 * 			n steps?
 *
 * 			In the language of your choosing, write a program that takes
 * 			an integer argument n and simulates the motion of this random
 * 			walk for n steps. Print the location at each step (including
 * 			the starting point), treating the starting point as the origin
 * 			(0, 0). Also, print the final Euclidean distance (as the crow
 * 			flies) from the origin.
 *************************************************************************/

#include "header.h"
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <math.h>

double EuclideanDistance (const int num) {
	int yPosition   = 0;
	int xPosition   = 0;
	double distance = 0;
//	std::cout << std::endl << yPosition;
//	std::cout << std::endl << xPosition;

	for(int index = 0; index < num; index++) {
		int random = rand()%4;

		if(random == 1) {
			yPosition++;
		} else if(random == 2) {
			yPosition--;
		} else if(random == 3) {
			xPosition++;
		} else if(random == 4) {
			xPosition--;
		}

//		cout << endl << "Here : " << xPosition << "," << yPosition;
	}

	distance = pow(xPosition, 2) + pow(yPosition, 2); //calculating Euclidean distance
	distance = sqrt(distance);

//	cout << endl << "Here : " << distance;

	return distance;
}
