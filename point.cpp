#include <iostream>
#include "Windows.h"
#include "point.h"
#include "console.h"

int x;
int y;
char sym;

point::point(int _x, int _y, char _sym) {
    x = _x;
    y = _y;
    sym = _sym;
}

void point::draw() {
    console console;
    console.setCursorPosition(x, y);

    std::cout << sym;
}
