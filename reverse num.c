#include<stdio.h>
#include<conio.h>
main()
{
	int n,r,rev=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("reverse=%d",rev);
	getch();
	return 0;
}
