#include<stdio.h>
#include<conio.h>
main()
{
	int facto=1,n,i;
	printf("enter mu,ber whose factorial to be calculated");
	scanf("%d",&n);
	for(i=n;i>0;i=i-1)
	{
		facto=facto*i;
	}
	printf("the factorial of number=%d",facto);
	getch();
	return 0;
}
