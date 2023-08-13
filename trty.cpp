#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("enter the value of a,b and c");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c){
		printf("a is greatest");
	}
	else if(b>a&&b>c){
		printf("b is greatest");
	}
	else{
		printf("c");
	}
	printf("program done");
	getch();
	return 0;
}
