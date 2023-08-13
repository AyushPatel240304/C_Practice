#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,d=0;
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			d++;
		}
	}
	if(d==0)
	{
		printf("this number is prime=%d",n);
	}
	else
	{
		printf("number is not prime=%d");
	}
	getch();
	return 0;
}
