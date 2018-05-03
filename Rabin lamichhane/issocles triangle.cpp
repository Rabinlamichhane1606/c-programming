//The code is written by Rabin lamichhane
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("enter the three sides:");
	scanf("%d%d%d",&a,&b,&c);
	if((a==b)||(a==c)||(b==c))
	{
		printf("the triangle of side %d %d %d is issocles",a,b,c);
	}
	else
	{
		printf("the triangle is not issoceles");
	getch();	
	}
}
