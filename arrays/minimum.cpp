#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i,min;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d \n",a[i]);
	}
	min=a[0];
	for(i=0;i<5;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("minimum of the elements=%d",min);
	getch();
	return 0;
}
