#include<stdio.h>
#include<conio.h>
float area(float,float);
main()
{
	float a,b,c;
	scanf("%f%f",&a,&b);
	c=area(a,b);
	printf("area=%f",c);
	getch();
	return 0;
}
float area(float a,float b)
{
	float c;
	c=0.5*a*b;
	return c;
}
