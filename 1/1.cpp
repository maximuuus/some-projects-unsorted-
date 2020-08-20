#include <windows.h>
#include <stdio.h>


#include "mouse_msg.cpp"
#include "kbd_msg.cpp"
#include "cmd_msg.cpp"
#include "paint.cpp"
#include "on_create.cpp"

//------------------------------------------------------------------
long __stdcall window_main_function(HWND hwnd,unsigned int message, unsigned int wparam,long lparam)
{
		switch(message)
	{
		case WM_CREATE:
		on_create(hwnd,message,wparam,lparam);
		break;

		case WM_COMMAND:
		on_cmd(hwnd,message,wparam,lparam);
		break;

		case WM_LBUTTONDOWN:
		//on_mouse(hwnd,message,wparam,lparam);
		break;

		case WM_KEYDOWN:
		//on_kbd(hwnd,message,wparam,lparam);
		break;
	}
return DefWindowProc(hwnd,message,wparam,lparam);
}

//-----------------------------------------------------------------
void main()
{
HWND h;


WNDCLASS wc;
ZeroMemory(&wc,sizeof(WNDCLASS));

wc.lpfnWndProc=(WNDPROC)&window_main_function;
wc.lpszClassName="Class";
wc.hbrBackground=CreateSolidBrush(RGB(200,200,200));

	RegisterClass(&wc);

h=CreateWindow("Class","CALC",WS_VISIBLE|WS_OVERLAPPEDWINDOW|WS_CLIPCHILDREN,100,100,400,340,0,0,0,0);

MSG msg;
int s=1;
	while(s!=0)
	{
	s=GetMessage(&msg,0,0,0);
	TranslateMessage(&msg);
	DispatchMessage(&msg);
	}

}
