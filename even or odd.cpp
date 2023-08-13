#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	printf("enter the value of i");
	scanf("%d",&i);
	if(i%2==0){
		printf("%d it is a even number",i);
	}
	else{
		printf("%d it is a odd number",i);
	}
	getch();
	return 0;
}
