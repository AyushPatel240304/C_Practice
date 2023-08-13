#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	printf("enter the value of i");
	scanf("%d",&i);
	if(i%2==0){
		printf("i is a even number=%d",i);
	}
	else{
		printf("i is a odd number=%d",i);
	}
	getch();
	return 0;
}
