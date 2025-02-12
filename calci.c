#include<stdio.h>
int main()
{
	int a,b,res,opt;
	printf("enter 1st number:");
	scanf("%d",&a);
	printf("enter 2nd number:");
	scanf("%d",&b);
	printf("enter 1 for addition\nenter 2 for subtarction\nenter 3 for multiplication\nenter 4 for division\n");
	scanf("%d",&opt);
	if(opt ==1)
		res = a+b;
	else if (opt == 2)
		res = a-b;
	else if (opt == 3)
		res = a*b;
	else if (opt ==4)
		res = a / b;
	else 
		printf("please enter a valid option");
	printf("result is %d",res);
	return 0;
}
