#pragma once

#include "lean_windows.h"

class Window
{
public:
	Window(unsigned int pw, unsigned int ph, const WCHAR* pwindow_title);
	~Window() = default;

	// Getters / setters
	HINSTANCE GetInstance();

	void SetWindowTitle(const WCHAR* new_title);

	UINT ProcessMessages();

	static LRESULT CALLBACK MSGInit(_In_ HWND   hWnd, _In_ UINT   message, _In_ WPARAM wParam, _In_ LPARAM lParam);
	static LRESULT CALLBACK MSGMiddleWare(_In_ HWND   hWnd, _In_ UINT   message, _In_ WPARAM wParam, _In_ LPARAM lParam);
	LRESULT CALLBACK HandleMSG(_In_ HWND   hWnd, _In_ UINT   message, _In_ WPARAM wParam, _In_ LPARAM lParam);

private:
	HINSTANCE mhInst;
	HWND mhWnd;

	WCHAR* mwindowTitle = nullptr;
};