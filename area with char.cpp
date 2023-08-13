#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,area;
	char i;
	//printf("enter the value of a and b");
	//scanf("%d %d",&a,&b);
	printf("enter \n c for area of circle \n t for area of triangle \n r for area of reactangle \n");
	scanf("%c",&i);
	switch(i) {
		case 'c':
			printf ("Enter the value of a");
			scanf("%d",&a);
			area=3.14*a*a;
			printf("the result is %d",area);
			break;
		case 't':
			printf("Enter the value of a and b");
			scanf("%d%d",&a,&b);
			area=(1/2)*a*b;
			printf("the result is %d",area);
			break;
		case 'r':
			printf("Enter the value of a and b");
			scanf("%d%d",&a,&b);
			area=a*b;
			printf("the result is %d",area);
			break;
		default:printf("invalid input !");
		    break;
	}
	getch();
	return 0;
}
