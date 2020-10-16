#include "Window.h"

#include <iostream>

int _stdcall WinMain(HINSTANCE hInst, HINSTANCE p, LPSTR lpCmdLine, int nCmdShow)
{
	Window game_window(1366u, 768u, L"Game Window");

	while (game_window.ProcessMessages() != WM_QUIT)
	{
		int i = 2 + 2;
	}

	return 0;
}