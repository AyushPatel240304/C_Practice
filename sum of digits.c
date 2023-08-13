#include<stdio.h>
#include<conio.h>
main()
{
	int n,r,sum=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("the sum of digits=%d",sum);
	getch();
	return 0;
}
