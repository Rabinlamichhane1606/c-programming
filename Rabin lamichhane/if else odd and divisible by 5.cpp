#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	if((n%2==1)&&(n%5==0))
	{
		printf("The given number %d is odd and divisible by 5",n);
	}
	else
	{
		printf("The number %d is either not divisible by 5 or not odd",n);
	}
	getch();
}
