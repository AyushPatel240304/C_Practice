#include<stdio.h>
#include<conio.h>
float area_of_triangle();
main()
{
	float c;
	c=area_of_triangle();
	printf("Area_of_triangle=%f",c);
	getch();
	return 0;
}
float area_of_triangle()
{
	float a,b,d;
	scanf("%f%f",&a,&b);
	d=0.5*a*b;
	return d;
}
