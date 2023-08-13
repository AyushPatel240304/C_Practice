#include<stdio.h>
#include<conio.h>
void sum();
main()
{
	sum();
	getch();
}
void sum()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("sum=%d",c);
}
