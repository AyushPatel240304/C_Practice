#include<stdio.h>
#include<string.h>
main()
{
	char s[20];
	int i,k=0;
	gets(s);
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		{
			printf("%d\n",i);
			k=1;
		}
	}
	if(k==0)
	{
		printf("-1");
	}
	return 0;
}
