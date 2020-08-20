long __stdcall on_create(HWND hwnd,unsigned int message, unsigned int wparam,long lparam)
{
CreateWindow("static","lpClassName",WS_CHILD|WS_VISIBLE,10,10,140,20,hwnd,(HMENU)12,0,0);
CreateWindow("edit","",WS_CHILD|WS_VISIBLE,150,10,200,20,hwnd,(HMENU)1,0,0);

CreateWindow("static","lpWindowName",WS_CHILD|WS_VISIBLE,10,30,140,20,hwnd,(HMENU)13,0,0);
CreateWindow("edit","",WS_CHILD|WS_VISIBLE,150,30,200,20,hwnd,(HMENU)2,0,0);

CreateWindow("static","dwStyle",WS_CHILD|WS_VISIBLE,10,50,140,20,hwnd,(HMENU)14,0,0);
CreateWindow("edit","",WS_CHILD|WS_VISIBLE,150,50,200,20,hwnd,(HMENU)3,0,0);

CreateWindow("static","x",WS_CHILD|WS_VISIBLE,10,70,140,20,hwnd,(HMENU)15,0,0);
CreateWindow("edit","",WS_CHILD|WS_VISIBLE,150,70,200,20,hwnd,(HMENU)4,0,0);

CreateWindow("static","y",WS_CHILD|WS_VISIBLE,10,90,140,20,hwnd,(HMENU)16,0,0);
CreateWindow("edit","",WS_CHILD|WS_VISIBLE,150,90,200,20,hwnd,(HMENU)5,0,0);

CreateWindow("static","nWidth",WS_CHILD|WS_VISIBLE,10,110,140,20,hwnd,(HMENU)17,0,0);
CreateWindow("edit","",WS_CHILD|WS_VISIBLE,150,110,200,20,hwnd,(HMENU)6,0,0);

CreateWindow("static","nHeight",WS_CHILD|WS_VISIBLE,10,130,140,20,hwnd,(HMENU)18,0,0);
CreateWindow("edit","",WS_CHILD|WS_VISIBLE,150,130,200,20,hwnd,(HMENU)7,0,0);

CreateWindow("static","hWndParent",WS_CHILD|WS_VISIBLE,10,150,140,20,hwnd,(HMENU)19,0,0);
CreateWindow("edit","",WS_CHILD|WS_VISIBLE,150,150,200,20,hwnd,(HMENU)8,0,0);

CreateWindow("static","hMenu",WS_CHILD|WS_VISIBLE,10,170,140,20,hwnd,(HMENU)20,0,0);
CreateWindow("edit","",WS_CHILD|WS_VISIBLE,150,170,200,20,hwnd,(HMENU)9,0,0);

CreateWindow("static","hInstance",WS_CHILD|WS_VISIBLE,10,190,140,20,hwnd,(HMENU)21,0,0);
CreateWindow("edit","",WS_CHILD|WS_VISIBLE,150,190,200,20,hwnd,(HMENU)10,0,0);

CreateWindow("static","lpParam",WS_CHILD|WS_VISIBLE,10,210,140,20,hwnd,(HMENU)22,0,0);
CreateWindow("edit","",WS_CHILD|WS_VISIBLE,150,210,200,20,hwnd,(HMENU)11,0,0);

CreateWindow("button","CREATE",WS_CHILD|WS_VISIBLE,140,250,100,50,hwnd,(HMENU)23,0,0);


return 0;
}