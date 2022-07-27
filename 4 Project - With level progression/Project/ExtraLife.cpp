#include <iostream>
#include <windows.h>

#include "ExtraLife.h"

void ExtraLife::Draw()
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(console, (int)m_color);

	std::cout << "&";
	SetConsoleTextAttribute(console, (int)ActorColor::Regular);
}