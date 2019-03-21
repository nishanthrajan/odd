#include<stdio.h>
void main()
{
	int a;
	printf("enter the input a:");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("even");
	}
	else if(a%2==1)
	{
		printf("odd");
	}
	else
	{
		printf("invalid");
	}
 
	return 0;
	getch();
}
 
