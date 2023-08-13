#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,s,t,d;
	char i;
	printf("enter \n < for swapping without third variable \n = for swapping with third variable \n $ for speed of car \n");
	scanf("%c",&i);
	switch(i){
		case '<':
			printf("enter the value  before swapping a and b");
			scanf("%d%d",&a,&b);
			a=a+b;
			b=a-b;
			a=a-b;
			printf("the value after swapping a=%d,b=%d",a,b);
			break;
			case '=':
				printf("enter the value before swapping a and b");
				scanf("%d%d",&a,&b);
				c=a;
				a=b;
				b=c;
				printf("the value after swapping a=%d,b=%d",a,b);
				break;
				case '$':
					printf("enter the value of t and d");
					scanf("%d%d",&t,&d);
					s=d/t;
					printf("speed of the car=%d",s);
					break;
					default:printf("invalid input !");
					break;
	}
	getch();
	return 0;
}
