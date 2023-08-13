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
	printf("the maximum of elements=%d",max);
	getch();
	return 0;
}
