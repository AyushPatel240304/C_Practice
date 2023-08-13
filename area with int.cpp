#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,area,i;
	printf("enter a and b");
	scanf("%d%d",&a,&b);
	printf("enter \n 1 for area of circle \n 2 for area of triangle \n 3 for area of reactangle \n");
	scanf("%d",&i);
	switch(i){
		case 1:
			area=3.14*a*a;
			printf("the result is %d",area);
			break;
		case 2:
			area=0.5*a*b;
			printf("the result is %d",area);
			break;
		case 3:
			area=a*b;
			printf("the result is %d",area);
			break;
		default:printf("invalid input !");
		break;
	}
	getch();
	return 0;
}
