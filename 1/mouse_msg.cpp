#include <windows.h>



long __stdcall on_mouse(HWND hwnd,unsigned int message,unsigned int wparam,long lparam)
{
	if(message==WM_RBUTTONDOWN)
	{
	
	}
	else if(message==WM_LBUTTONDOWN)
	{

	char text[32];
	int x=(unsigned short)lparam;
	int y=HIWORD(lparam);
	HDC hdc=GetDC(hwnd);


	HWND h=0;
	
	h=GetDlgItem(hwnd,10);
	SendMessage(h,WM_SETTEXT,strlen(text),(long)text);

	h=GetDlgItem(hwnd,20);
	SendMessage(h,LB_ADDSTRING,0,(long)text);

	h=GetDlgItem(hwnd,30);
	SendMessage(h,CB_ADDSTRING,0,(long)text);

	h=GetDlgItem(hwnd,40);
	SendMessage(h,WM_SETTEXT,strlen(text),(long)text);

	h=GetDlgItem(hwnd,50);
	SendMessage(h,WM_SETTEXT,strlen(text),(long)text);

	//SetPixel(hdc,x,y,RGB(250,0,0));
	}
	else if(message==WM_MOUSEMOVE)
	{
		if(wparam==MK_LBUTTON)
		{
		int x=(unsigned short)lparam;
		int y=HIWORD(lparam);
		HDC hdc=GetDC(hwnd);

		
		static POINT pt={0,0};
		/*
		SetColor(
		MoveToEx(hdc,pt.x,pt.y,&pt);
		LineTo(hdc,x,y);
		pt.x=x;
		pt.y=y;*/
		}
	}
	else if(message==WM_RBUTTONDBLCLK)
	{
	
	}
	else if(message==WM_LBUTTONDBLCLK)
	{
	}

return 0;
}