#include<stdio.h>
#include<conio.h>
main()
{
	float f,c;
	printf("enter the value of f");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("temperature in celsius=%f",c);
	getch();
	return 0;
}
