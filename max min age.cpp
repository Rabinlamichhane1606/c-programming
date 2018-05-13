//lab 7
#include<stdio.h>
#include<conio.h>
main()
{
		int max=0,min=999;
	int a1,a2,a3;
		printf("Enter ages of three people:");
	scanf("%d%d%d",&a1,&a2,&a3);
	if (a1>max)
	{
		max=a1;
	}
	if(a2>max)
	{
		max=a2;
	}
		if (a3>max)
	{
		max=a3;
	}
	if(a1<min)
	{
		min=a1;
	}
		if(a2<min)
	{
		min=a2;
	}
		if(a3<min)
	{
		min=a3;
	}
	printf("the oldest and youngest are %d and %d",max,min);
	getch();
}
