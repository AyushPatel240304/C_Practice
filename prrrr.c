#include<stdio.h>
main()
{
	int N,i,d=0;
	scanf("%d",&N);
	for(i=2;i<=N/2;i++)
	{
		if(N%i==0)
		{
			d++;
		}
	}
	if(d==0)
	{
		printf("%d",N);
	}
	return 0;
}

