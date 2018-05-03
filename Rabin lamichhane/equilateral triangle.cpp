#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("Enter three sides of a triangle:");
	scanf("%d%d%d",&a,&b,&c);
	if((a==b)&&(b==c)&&(a==c))
	{
	printf("THe given triangle of side %d %d %d is equilateral triangle",a,b,c);
	}
	else
	{
		printf("the triangle is not eqilateral triangle");
	}
	getch();
}
