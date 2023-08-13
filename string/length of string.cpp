#include<stdio.h>
#include<string.h>
main()
{
	char d[50];
	int i=0,l=0;
	gets(d);
	while(d[i]!='\0')
	{
		l=l+1;
		i++;
	}
	printf("the length=%d",l);
}
