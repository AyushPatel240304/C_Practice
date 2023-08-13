#include<stdio.h>
#include<conio.h>
main()
{
	int a[10],i,even=0,odd=0;
	printf("enter 10 array elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("%d \n",a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			even=even+1;
			printf("the number is even=%d \n",a[i]);
		}
		else
		{
			odd=odd+1;
			printf("the number is odd=%d \n",a[i]);
		}
	}
	printf("the total even=%d and total odd=%d",even,odd);
	getch();
	return 0;
}
