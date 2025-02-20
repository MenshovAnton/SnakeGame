#include <iostream>
#include <list>
#include "horizontalLine.h"
#include "point.h"
#include "figure.h"

horizontalLine::horizontalLine(int xLeft, int xRight, int y, char sym)
{
	for (int x = xLeft; x <= xRight; x++) {
		point p{ x, y, sym };
		pList.push_back(p);
	}
}
