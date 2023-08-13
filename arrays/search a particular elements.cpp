#include<stdio.h>
#include<conio.h>
main()
{
	int a[10],i,n;
	printf("enter 10 array elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("%d \n",a[i]);
	}
	printf("enter the element to be searched");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		if(a[i]==n)
		{
			printf("element found at %d location=%d",i,a[i]);
		}
	}
	getch();
	return 0;
}
