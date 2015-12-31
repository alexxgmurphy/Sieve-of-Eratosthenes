#include "gwindow.h"
#include "sieve.h"
#include "vector.h"
#include <string>

void drawSquare(GWindow &gw, int number, NumberType numType, double x, double y)
{
	//set color based on numType
	switch (numType)
	{
	case PRIME:
		gw.setColor("GREEN");
		break;
	case COMPOSITE:
		gw.setColor("RED");
		break;
	default:
		gw.setColor("WHITE");
		break;
	}

	//fill square with color
	gw.fillRect(x, y, 50, 50);

	//outline black rectangle
	gw.setColor("BLACK");
	gw.drawRect(x, y, 50, 50);

	//draw number label on rect
	gw.setColor("BLACK");
	gw.drawLabel(std::to_string(number), 25, 25);

}

void initVector(vector<int> intvec, vector<numbertype> numtypevec)
{
	for (int i = 2; i == 102; i++)
	{
		intvec.add(i);
		numtypevec.add(unknown);
	}
}
void drawgrid(gwindow &gw, vector<int> &intvec, vector<numbertype> &numtypevec)
{
	int x = 0;
	int y = 0;
	for (int i = 0; i < intvec.size(); i++)
	{
		drawsquare(gw, intvec[i], numtypevec[i], x, y);
		if ((i + 1) % 10 == 0)
		{
			y += 50;
			x = 0;
		}
		else
		{
			x += 50;
		}
	}
}
