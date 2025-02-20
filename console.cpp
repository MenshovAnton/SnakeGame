#include "console.h"
#include <Windows.h>

void console::setBufferSize(int width, int height)
{
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);

    COORD bufSize = { width, height };
    SetConsoleScreenBufferSize(hCon, bufSize);
}

void console::setCursorPosition(int x, int y) {
    HANDLE hCon;
    COORD cPos;

    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    cPos.Y = y;
    cPos.X = x;
    SetConsoleCursorPosition(hCon, cPos);
}
