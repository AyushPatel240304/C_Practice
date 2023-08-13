#include<stdio.h>
#include<conio.h>
main()
{
	float a,b,area;
	char i;
	printf("enter a and b");
	scanf("%f%f",&a,&b);
	printf("enter \n c for area of circle \n t for area of triangle \n r for area of reactangle \n");
	scanf("%c",&i);
	switch(i){
		case 'c':
			area=3.14*a*a;
			printf("the result is %f",area);
			break;
		case 't':
			area=(a*b)*0.5;
			printf("the result is %f",area);
			break;
		case 'r':
			area=a*b;
			printf("the result is %f",area);
			break;
		default:printf("invalid input !");
		break;
	}
	getch();
	return 0;
}
