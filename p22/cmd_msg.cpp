long __stdcall on_cmd(HWND hwnd,UINT message,UINT wparam,long lparam)
{
		switch(LOWORD(wparam))
		{
		case 300: hfont_global=select_font(hwnd);break;
		case 400: cc_global=color(hwnd);break;
		case 500: print_dialog(hwnd);break;
		//case 600: find_text(hwnd,message,lparam);break;
		case 700: open_file(hwnd);break;
		//case 600: painthook(hwnd,message,wparam,lparam);break;

		case 10:
		HWND h=0;
		char str[500];
		h=GetDlgItem(hwnd,50);
		SendMessage(h,WM_GETTEXT,500,(long)str);
		strcat(str,"1");
		SendMessage(h,WM_SETTEXT,0,(long)str);
		
		h=GetDlgItem(hwnd,20);
		SendMessage(h,LB_DELETESTRING,0,0);

		h=GetDlgItem(hwnd,30);
		SendMessage(h,CB_DELETESTRING,0,0);
		break;
		}


return 0;
}