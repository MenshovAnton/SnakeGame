#include <iostream>
#include <Windows.h>
#include "point.h"
#include "horizontalLine.h"
#include "verticalLine.h"
#include "console.h"
#include "figure.h"

int main()
{
    console console;
    console.setBufferSize(80, 25);

    horizontalLine topLine{ 0, 78, 0, '+' };
    horizontalLine bottomLine{ 0, 78, 24, '+' };
    verticalLine leftLine{ 0, 24, 0, '+' };
    verticalLine rightLine{ 0, 24, 78, '+' };
    topLine.draw();
    bottomLine.draw();
    leftLine.draw();
    rightLine.draw();

    point p{ 4, 5, '*' };
    p.draw();

    console.setCursorPosition(0, 25);

    system("pause");

    return 0;
}
