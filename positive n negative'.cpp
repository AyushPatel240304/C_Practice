#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	printf("enter the number");
	scanf("%d",&i);
	if(i>0){
		printf("%d is a positive number",i);
	}
	else if(i<0){
		printf("%d is a negative number",i);
	}
	else{
		printf("%d is neautral number",i);
	}
	getch();
	return 0;
}
