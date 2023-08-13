#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i,max;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d \n",a[i]);
	}
	max=a[0];
	for(i=0;i<5;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	if(max%2==0)
	{
		printf("even number");
	}
	getch();
	return 0;
}
