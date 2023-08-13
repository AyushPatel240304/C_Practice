#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,i;
	printf("enter the value of a and b");
	scanf("%d%d",&a,&b);
	printf("enter \n c for area of circle \n t for area of triangle \n r for area of rectangle \n");
	scanf("%d",&i);
	switch(i){
		case 'c':
			c=3.14*a*a;
			printf("the result is %d",c);
		break;
		case 't':
			c=1/2*a*b;
			printf("the result is %d",c);
		break;
		case 'r':
			c=a*b;
			printf("the result is %d",c);
		break;
		default: printf("this is invalid input !");
		break;
	}		
		getch();
		return 0;
		}

