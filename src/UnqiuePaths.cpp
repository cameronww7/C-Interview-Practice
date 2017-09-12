/**************************************************************************
 * AUTHOR  : Cameron W
 * PROJECT : C++ Practice
 * -----------------------------------------------------------------------
 * Goal :
 * 			A robot is located at the top-left corner of a m x n grid
 * 			(marked 'Start' in the diagram below).
 *
 *			The robot can only move either down or right at any point
 *			in time. The robot is trying to reach the bottom-right corner
 *			of the grid (marked 'Finish' in the diagram below).
 *
 *			How many possible unique paths are there?
 *			Above is a 3 x 7 grid. How many possible unique paths are there?
 *
 *			Note: m and n will be at most 100.
 *************************************************************************/

#include "header.h"


int UniquePaths(int xRowSize, int xColSize) {
	int numberOfPaths = 0;

	int theGrid[xRowSize][xColSize];

	for(int row = 0; row < xRowSize; row++) {
		for(int col = 0; col < xColSize; col++) {
			theGrid[row][col] = 0;
		}
	}

	for(int row = 0; row < xRowSize; row++) {

	}



	return numberOfPaths;
}
