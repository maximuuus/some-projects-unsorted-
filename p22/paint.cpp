void pixel_thick(HDC hdc,int x,int y,int p,ULONG rgb)
{


	for( int j=-p;j<p;j++)
	{    
		for( int g=-p;g<p;g++)
		{	
		SetPixel(hdc,x+g,y+j,rgb);
		}
	}
}

long __stdcall on_paint(HWND hwnd,unsigned int message,unsigned int wparam,long lparam)
{

	HDC hdc=GetDC(hwnd);
	
	SelectObject(hdc,hfont_global);

	SetBkMode(hdc,1);
	
	SetTextColor(hdc,cc_global);
	TextOut(hdc,50,150,"1353463257",12);

	SetTextColor(hdc,cc_global);
	TextOut(hdc,50,200,"123456789",12);

	
return 0;
}