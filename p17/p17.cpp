#include <windows.h>
#include <stdio.h>

#include "mouse_msg.cpp"
#include "kbd_msg.cpp"
#include "cmd_msg.cpp"
#include "paint.cpp"
#include "on_create.cpp"
 
//----------------------------------------------------------------

long __stdcall window_main_function_old(HWND hwnd,unsigned int message
					, unsigned int wparam,long lparam)
{

	if(message==WM_COMMAND)
	on_cmd(hwnd,message,wparam,lparam);
	
	else    if(
		message==WM_RBUTTONDOWN
		|| message==WM_LBUTTONDOWN
		|| message==WM_MOUSEMOVE
		|| message==WM_RBUTTONDBLCLK
		|| message==WM_LBUTTONDBLCLK
		)
	on_mouse(hwnd,message,wparam,lparam);


	else if(message==WM_PAINT)
	on_paint(hwnd,message,wparam,lparam);

	else if(message==WM_KEYDOWN)
	on_kbd(hwnd,message,wparam,lparam);

return DefWindowProc(hwnd,message,wparam,lparam);
}

//----------------------------------------------------------------
long __stdcall window_main_function_chvenia(HWND hwnd,unsigned int message
					, unsigned int wparam,long lparam)
{
	switch(message)
	{
		case WM_CREATE:on_create(hwnd,message,wparam,lparam);break;
		case WM_COMMAND:on_cmd(hwnd,message,wparam,lparam);break;
		case WM_RBUTTONDOWN:
		case WM_LBUTTONDOWN:
		case WM_MOUSEMOVE:
		case WM_RBUTTONDBLCLK:
		case WM_LBUTTONDBLCLK:
		on_mouse(hwnd,message,wparam,lparam);
		break;

		case WM_PAINT:
		on_paint(hwnd,message,wparam,lparam);
		break;

		case WM_KEYDOWN:
		on_kbd(hwnd,message,wparam,lparam);
		break;
	}
return DefWindowProc(hwnd,message,wparam,lparam);
}
//----------------------------------------------------------------


void main()
{
HWND hwnd=0;
int X,Y,W,H;
ULONG style=0;

WNDCLASS wc;
ZeroMemory(&wc,sizeof(WNDCLASS));

wc.style=CS_DBLCLKS;
wc.lpfnWndProc=(WNDPROC)&window_main_function_chvenia;
wc.lpszClassName="12";
wc.hbrBackground=(HBRUSH)CreateSolidBrush(RGB(700,600,500));
wc.hIcon=(HICON)LoadImage(0,"c:\\1.ico",IMAGE_ICON,200,200,LR_LOADFROMFILE);

	if(RegisterClass(&wc)==0)
	{
	MessageBox(hwnd,"RegisterClass error",0,0);
	return;
	}


//mtavari fanjara:
style=WS_VISIBLE|WS_OVERLAPPEDWINDOW|WS_CLIPCHILDREN;
X=100;Y=30;W=1000;H=500;
hwnd=CreateWindow(wc.lpszClassName,"Main",style,X,Y,W,H,0,0,0,0);

	
MSG msg;
int s=1;
	while(s!=0)
	{
	s=GetMessage(&msg,0,0,0);
	TranslateMessage(&msg);
	DispatchMessage(&msg);
	}
}