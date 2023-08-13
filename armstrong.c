#include<stdio.h>
#include<conio.h>
main()
{
	int n,arm=0,r,t;
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		r=n%10;
		arm=arm+pow(r,4);
		n=n/10;
	}
	if(arm==t)
	{
		printf("arnstrong=%d",arm);
	}
	else
	{
		printf("not an armstrong");
	}
	getch();
	return 0;
}
