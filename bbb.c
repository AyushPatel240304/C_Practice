#include<stdio.h>
#include<math.h>
main()
{
	int ra,ba,he,a,b,area,i;
	printf("enter the value of ra,ba,he,a and b");
	scanf("%d%d%d%d%d",&ra,&ba,&he,&a,&b);
	printf("enter \n c for area of circle \n t for area of triangle \n r for area of reactangle \n");
	scanf("%d",&i);
	switch(i){
		case 'c':
			area=3.14*ra*ra;
			printf("the result is %d",area);
			break;
		case 't':
			area=1/2*ba*he;
			printf("the result is %d",area);
			break;
		case 'r':
			area=a*b;
			printf("the result is %d",area);
			break;
		default: printf("invalid input !");
		break;
	}
	return 0;
}
