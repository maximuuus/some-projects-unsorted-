#include "calc.cpp"

long __stdcall on_cmd(HWND hwnd,unsigned int message,unsigned int wparam,long lparam)
{
	switch(LOWORD(wparam))
	{
		case 10:
		{
			if(HIWORD(wparam)==EN_UPDATE)
			{
			char str[200];
			HWND h=0;
			h=GetDlgItem(hwnd,10);
			SendMessage(h,WM_GETTEXT,45,(ULONG)str);

			ULONG x=calc(str);
			sprintf(str,"%d",x);

			h=GetDlgItem(hwnd,20);
			SendMessage(h,WM_SETTEXT,55,(ULONG)str);
			}
		}
		break;
	}
/*
int ctrl_id = (unsigned short)wparam;
	if(ctrl_id==10)
	{
	HWND h=0;
	h=GetDlgItem(hwnd,20);
	SendMessage(h,LB_DELETESTRING,0,0);

	h=GetDlgItem(hwnd,30);
	SendMessage(h,CB_DELETESTRING,0,0);

	}
	*/
return 0;
}