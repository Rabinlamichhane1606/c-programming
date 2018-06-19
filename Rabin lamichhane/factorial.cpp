// wap to find factorial of any no given by user
#include<conio.h>
#include<stdio.h>
main()
{
	int a,b,fact=1,c;
	printf("enter the number:");
	scanf("%d",&a);
	for (b=1;b<=a;b++)
	{
		fact=fact*b;
		printf("b is %d\n",b);
		 
	}
	printf("factorial  is %d\n",fact);
	
}
