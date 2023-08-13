#include<stdio.h>
#include<conio.h>
main()
{
	int marks[5],i;
	printf("enter 5 subject marks");
	for(i=0;i<5;i++)
	{
		scanf("%d",&marks[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d\n",marks[i]);
	}
	getch();
}
