#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d,e,f;
	printf("enter the value of a and b");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("addition=%d",c);
	d=a-b;
	printf("subtraction=%d",d);
	e=a*b;
	printf("multipication=%d",e);
	f=a/b;
	printf("division=%d",f);
	getch();
	return 0;
}
