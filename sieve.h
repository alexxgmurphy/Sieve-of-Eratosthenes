#pragma once

#include "gwindow.h"
#include <string>

enum NumberType
{
	UNKNOWN,
	PRIME,
	COMPOSITE
};

//Function: Draws a square in window gw, fills it, outlines it, and displays a number in it
//number = number to display in square
//NumberType = prime, not prime, or unknown, determines fill color (red for composite, green for prime, white for unknown)
//x and y = x and y coordinates of top left corner of square
//square is always outlined in black
void drawSquare(GWindow &gw, int number, NumberType numType, double x, double y);

//Function: Initializes two vectors of 100 each, one with integers from 2 to 101, the other with NumberTypes for each of the ints in intVec
void initVector(Vector<int> intVec, Vector<NumberType> numTypeVec);

//Function: draws the current state of the grid
//Calls drawSquare once for every number in the vectors
void drawGrid(GWindow &gw, Vector<int> &intVec, Vector<NumberType> &numTypes);
