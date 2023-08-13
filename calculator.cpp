#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,i;
	printf("enter the value of a and b");
	scanf("%d%d",&a,&b);
	printf("enter \n 1 addition of two numbers \n 2 subtraction of two number \n 3 multipication of two numbers \n 4 division of two numbers \n");
	scanf("%d",i);
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
