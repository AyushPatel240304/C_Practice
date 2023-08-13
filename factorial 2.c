#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,f=1;
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		f=f*i;
	}
	printf("factorial=%d",f);
	getch();
	return 0;
}
