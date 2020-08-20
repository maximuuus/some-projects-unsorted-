char z[10],x[50],c[100],v[100],b[100],n[100],m[100],s[100];
int vv,bb,nn,mm,ss,a,d,f,tt;


long __stdcall on_cmd(HWND hwnd,unsigned int message,unsigned int wparam,long lparam)
{
HWND h=0;
	switch(LOWORD(wparam))
	{
		case 1:
		{
			if(HIWORD(wparam)==EN_UPDATE)
			{
			h=GetDlgItem(hwnd,1);
			SendMessage(h,WM_GETTEXT,100,(ULONG)z);
			}
		}
		break;

		case 2:
		{
			if(HIWORD(wparam)==EN_UPDATE)
			{
			h=GetDlgItem(hwnd,1);
			SendMessage(h,WM_GETTEXT,100,(ULONG)x);
			}
		}
		break;

		case 3:
		{
			if(HIWORD(wparam)==EN_UPDATE)
			{
			h=GetDlgItem(hwnd,1);
			SendMessage(h,WM_GETTEXT,100,(ULONG)c);
			static ULONG o=sprintf(c,"%d",c);
			tt=o;

			}
		}
		break;

		case 4:
		{
			if(HIWORD(wparam)==EN_UPDATE)
			{
			h=GetDlgItem(hwnd,1);
			SendMessage(h,WM_GETTEXT,100,(ULONG)v);
			sprintf(v,"%d",vv);
			}
		}
		break;

		case 5:
		{
			if(HIWORD(wparam)==EN_UPDATE)
			{
			h=GetDlgItem(hwnd,1);
			SendMessage(h,WM_GETTEXT,100,(ULONG)b);
			sprintf(b,"%d",bb);
			}
		}
		break;

		case 6:
		{
			if(HIWORD(wparam)==EN_UPDATE)
			{
			h=GetDlgItem(hwnd,1);
			SendMessage(h,WM_GETTEXT,100,(ULONG)n);
			sprintf(n,"%d",nn);
			}
		}
		break;

		case 7:
		{
			if(HIWORD(wparam)==EN_UPDATE)
			{
			h=GetDlgItem(hwnd,1);
			SendMessage(h,WM_GETTEXT,100,(ULONG)m);
			sprintf(m,"%d",mm);
			}
		}
		break;
/*
		case 8:
		{
			if(HIWORD(wparam)==EN_UPDATE)
			{
			h=GetDlgItem(hwnd,1);
			SendMessage(h,WM_GETTEXT,100,(ULONG)a);
			}
		}
		break;

		case 9:
		{
			if(HIWORD(wparam)==EN_UPDATE)
			{
			h=GetDlgItem(hwnd,1);
			SendMessage(h,WM_GETTEXT,100,(ULONG)s);
			sprintf(s,"%d",ss);
			}
		}
		break;

		case 10:
		{
			if(HIWORD(wparam)==EN_UPDATE)
			{
			h=GetDlgItem(hwnd,1);
			SendMessage(h,WM_GETTEXT,100,(ULONG)d);
			}
		}
		break;

		case 11:
		{
			if(HIWORD(wparam)==EN_UPDATE)
			{
			h=GetDlgItem(hwnd,1);
			SendMessage(h,WM_GETTEXT,100,(ULONG)f);
			}
		}
		break;
*/
		case 23:
		{
		CreateWindow(z,x,tt,vv,bb,nn,mm,0,0,0,0);
		}
		break;
	}

return 0;
}