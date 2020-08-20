#include <windows.h>
#include <stdio.h>
long __stdcall on_paint(HWND hwnd,unsigned int message,unsigned int wparam,long lparam)
{
	
	char text[32];
	static int counter=0;
	counter++;
	sprintf(text,"Counter = %d",counter);
	TextOut(GetDC(GetDesktopWindow()),500,10,text,strlen(text));
	//MessageBox(0,"WM_PAINT=0x000F",0,0);
	
return 0;
}