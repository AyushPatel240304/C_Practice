main()
{
	float f,c;
	#include<stdio.h>
	#include<conio.h>
	printf("enter the value of f");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("temperature in celsius=%f",c);
	getch();
	return 0;
}
