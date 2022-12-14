#include <Windows.h>
#include <stdio.h>
using namespace std;

void ShowConsole()
{
    AllocConsole();
    FILE* pFileCon = NULL;
    freopen("CON", "w", stdout);
    COORD coordInfo;
    coordInfo.X = 130;
    coordInfo.Y = 9000;
    SetConsoleScreenBufferSize(GetStdHandle(STD_OUTPUT_HANDLE), coordInfo);
    SetConsoleMode(GetStdHandle(STD_OUTPUT_HANDLE), ENABLE_QUICK_EDIT_MODE | ENABLE_EXTENDED_FLAGS);
}