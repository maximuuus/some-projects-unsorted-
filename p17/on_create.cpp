long __stdcall on_create(HWND hwnd,unsigned int message
					, unsigned int wparam,long lparam)
{
int X,Y,W,H;
DWORD style=WS_VISIBLE|WS_CHILD|WS_BORDER;

X=10;Y=30;W=100;H=100;
CreateWindow("button","button",style,X,Y,W,H,hwnd,(HMENU)10,0,0);


X=150;Y=30;W=100;H=100;
CreateWindow("listbox","listbox",style,X,Y,W,H,hwnd,(HMENU)20,0,0);

X=300;Y=30;W=100;H=100;
CreateWindow("combobox","combobox",style,X,Y,W,H,hwnd,(HMENU)30,0,0);

X=450;Y=30;W=100;H=100;
CreateWindow("static","static",style,X,Y,W,H,hwnd,(HMENU)40,0,0);

X=600;Y=30;W=100;H=100;
CreateWindow("edit","edit",style,X,Y,W,H,hwnd,(HMENU)50,0,0);

style=WS_VISIBLE|WS_OVERLAPPEDWINDOW|WS_CLIPCHILDREN;
X=1310;Y=230;W=200;H=100;
//CreateWindow("1223","Main",style,X,Y,W,H,0,0,0,0);

return 0;
}