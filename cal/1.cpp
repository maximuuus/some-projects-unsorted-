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
WNDCLASS wc;
ZeroMemory(&wc,sizeof(WNDCLASS));

wc.style=CS_DBLCLKS;
wc.lpfnWndProc=window_main_function;
wc.lpszClassName="sttc";

RegisterClass(&wc);


HWND h;
MSG msg;

int y=WS_VISIBLE|WS_OVERLAPPEDWINDOW|WS_CLIPCHILDREN;
h=CreateWindow("sttc","1",y,100,50,500,300,0,0,0,0);


int x=1;
		while(x!=0)
		{
		x=GetMessage(&msg,0,0,0);
		TranslateMessage(&msg);
		DispatchMessage(&msg);
		
		}

}
