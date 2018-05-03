#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	printf("Enter the value of a and b\n");
	scanf("%d%d",&a,&b);
	a=(a-b);
	b=(a+b);
	a=(b-a);
	printf("After swapping first number=%d\n",a);
	printf("After swapping second number=%d",b);
	getch();
}
