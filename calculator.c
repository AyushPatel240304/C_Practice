#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,i;
	printf("enter the value of a and b");
	scanf("%d%d",&a,&b);
	printf("enter \n 1 for addition \n 2 for subtraction \n 3 for multipication \n 4 for division \n");
	scanf("%d",&i);
	switch(i){
		case 1:
			c=a+b;
			printf("the result is %d",c);
			break;
		case 2:
			c=a-b;
			printf("the result is %d",c);
			break;
		case 3:
			c=a*b;
			printf("the result is %d",c);
			break;
		case 4:
			c=a/b;
			printf("the result is %d",c);
			break;
		default:printf("invalid input !");
		break;
	}
		getch();
		return 0;
}
