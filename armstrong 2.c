#include<stdio.h>
#include<conio.h>
main()
{
	int n,arm=0,r,t,r1,tp,d=0;
	scanf("%d",&n);
	tp=n;
	t=n;
	while(n>0)
	{
		r=n%10;
		n=n/10;
		d=d+1;
	}
	printf("the total digits are=%d",d);
	while(tp>0)
	{
		r1=tp%10;
		arm=arm+pow(r1,d);
		tp=tp/10;
	}
	if(arm==t)
	{
		printf("Armstrong");
	}
	else
	{
		printf("not an armstrong");
	}
	getch();
	return 0;
}
