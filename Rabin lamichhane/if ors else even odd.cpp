#include<stdio.h>
#include<conio.h>
main()
{
	int a,r;
	printf("\nEnter a number=");
	scanf("%d",&a);
	r=a%2;
	if(r==0)
	{
		printf("a is even");
	}
	else
	{
		printf("a is odd");
	}
}
