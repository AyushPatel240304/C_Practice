#include<stdio.h>
#include<conio.h>
struct info
{
	char std_name[20];
	int std_roll_no;
	float std_marks;
};
main()
{
	int n,i;
	printf("enter value of n");
	scanf("%d",&n);
	struct info ob[n];
	for(i=0;i<n;i++)
	{
		gets(ob[i].std_name);
		scanf("%d \t %f \t",&ob[i].std_roll_no,&ob[i].std_marks);
	}
	printf("the records are \n");
	for(i=0;i<n;i++)
	{
		printf("%s=ob[i].std_name \t %d=ob[i].std_roll_no \t %f=ob[i].std_marks \t");
	}
	getch();
}
