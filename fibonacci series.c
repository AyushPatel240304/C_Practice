#include<stdio.h>
#include<conio.h>
main()
{
	int n,a=0,b=1,c,i;
	printf("enter nth term");
	scanf("%d",&n);
	printf("\t %d %d",a,b);
	for(i=2;i<=n;i++)
	{
		c=a+b;
		printf("\t %d",c);
		a=b;
		b=c;
	}
	getch();
	return 0;
}
