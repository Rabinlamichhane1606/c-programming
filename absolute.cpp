#include<stdio.h>
#include<conio.h>
main()
{
	float a;
	printf("Enter a number");
	scanf("%f",&a);
	if (a<0)
	{
		printf("the absolute number is %f",-a);
		
	}
	else
	{
	printf("the absolute number is %f",a);
	}
getch();
}
