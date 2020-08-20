#include <windows.h>
#include <stdio.h>

int calc(char *str)
{
int	p=strlen(str);
	char str1[100],str2[100];
	int k=0;
	memset(str1,0,100);
	memset(str2,0,100);


	for(int i=0;str[i]!='+' && i<p;i++)
	{
		str1[k]=str[i];
		k++;
	}

int j=atoi(str);
i++;

	for(k=0;str[i]!=0;i++)
	{
		str2[k]=str[i];
		k++;
	}

	if(str[i]!=0)
	{
		int x=atoi(str1),y=atoi(str2);
		return x+y;
	}

return 0;
}

void main()
{
int x=calc("56563+86+786");



}

