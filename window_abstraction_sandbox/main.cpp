#include "Window.h"

#include <iostream>

int WINAPI wWinMain(_In_ HINSTANCE hInst, _In_opt_ HINSTANCE p, _In_ PWSTR lpCmdLine, _In_ int nCmdShow)
{
	Window game_window(1366u, 768u, L"Game Window");
	game_window.SetWindowTitle(L"Window");

	while (game_window.ProcessMessages() != WM_QUIT)
	{
		int i = 2 + 2;
	}

	return 0;
}