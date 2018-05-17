//Write a program input amount from user and print minimum number of notes required from the amount.
#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	printf("Enter the amount=");
	scanf("%d",&a);
	a=a-a%1000;
	a=a%500;
	printf("%d",a);
}
