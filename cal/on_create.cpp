long __stdcall on_create(HWND hwnd,unsigned int message, unsigned int wparam,long lparam)
{


CreateWindow("edit","",WS_VISIBLE|WS_CHILD|WS_BORDER,0,0,500,150,hwnd,(HMENU)10,0,0);
CreateWindow("edit","",WS_VISIBLE|WS_CHILD|WS_BORDER,0,130,500,150,hwnd,(HMENU)20,0,0);


return 0;
}