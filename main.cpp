#include "gwindow.h"
#include "sieve.h"
#include <string>
#include "vector.h"

int main(int argc, char** argv)
{
	// Create a 500x500 window
	GWindow gw(500, 500);
	
	// TODO: Implement stuff
	//vector declarations
	Vector<int> intVec;
	Vector<NumberType> numTypeVec;

	//call drawSquare and initVector functions
	//NumberType numType = PRIME;
	//initVector(intVec, numTypeVec);

	NumberType numType = PRIME;
	drawSquare(gw, 7, numType, 0, 0);

	return 0;
}
