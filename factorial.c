#include<stdio.h>
#include<conio.h>
main()
{
	int f=1,n,i;
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		f=f*i;
	}
	printf("facto=%d",f);
	getch();
	return 0;
}
