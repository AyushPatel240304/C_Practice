#include<stdio.h>
#include<conio.h>
main()
{
	int G_Salary,Basic_Pay,HRA,DA,TA;
	printf("enter the value of Basic_Pay");
	scanf("%d",&Basic_Pay);
	HRA=(10*Basic_Pay)/100;
	DA=(5*HRA)/100;
	TA=(2.5*DA)/100;
	G_Salary=Basic_Pay+HRA+DA+TA;
	printf("salary =%d",G_Salary);
	if(G_Salary>=50000){
		printf("%d is Manager of company",G_Salary);
	}
	else if(G_Salary>=40000&&G_Salary<=49999){
		printf("%d is Asst Manager",G_Salary);
	}
	else if(G_Salary<=40000){
		printf("%d is Normal Employee",G_Salary);
	}
	else{
		printf("nothing");
	}
	getch();
	return 0;
}
