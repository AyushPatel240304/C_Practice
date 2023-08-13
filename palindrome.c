#include<stdio.h>
#include<conio.h>
main()
{
	int n,r,t,rev=0;
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(rev==t)
	{
		printf("Number is palindrome");
	}
	else
	{
		printf("number is not palindrome");
	}
	getch();
	return 0;
}
