#include<stdio.h>
#include<conio.h>
main()
{
	float G_Salary,Basic_Pay,HRA,DA,TA;
	printf("enter the value of Basic_Pay");
	scanf("%f",&Basic_Pay);
	HRA=(10*Basic_Pay)/100;
	DA=(5*HRA)/100;
	TA=(2.5*DA)/100;
	G_Salary=Basic_Pay+HRA+DA+TA;
	printf("salary =%f",G_Salary);
	if(G_Salary>=50000){
		printf("%f is Manager of company",G_Salary);
	}
	else if(G_Salary=40000_49999){
		printf("%f is Asst Manager",G_Salary);
	}
	else{
		printf("%f is Normal Employee");
	}
	getch();
	return 0;
}
