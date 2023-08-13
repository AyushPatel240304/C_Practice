#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i,j,d=0;
	printf("enter 5 array elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=2;j<=a[i]/2;j++)
		{
			if(a[i]%j==0)
			{
				d=1;
				break;
						}
		}		if(d==0)
		{
			printf("this number is prime=%d\n",a[i]);
		}
		else
		{
			printf("this number is not prime=%d\n",a[i]);
		}
}
	getch();
	return 0;
}
