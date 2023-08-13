#include<stdio.h>
#include<conio.h>
void add(int a,int b);
main()
{
	int c,d;
	scanf("%d%d",&c,&d);
	add(c,d);
	getch();
	return 0;
}
void add(int e,int f)
{
	int g;
	g=e+f;
	printf("sum=%d",g);
}
