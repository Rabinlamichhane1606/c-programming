#include<stdio.h>
#include<conio.h>
main()
{
int feet1,feet2,feet3,inch1,inch2,inch3;
printf("enter two distances in feet=");
scanf("%d%d",&feet1,&feet2);
printf("Enter distance in inch=");
scanf("%d%d",&inch1,&inch2);
feet3=feet1 + feet2;
inch3=inch1+inch2;
if(inch3>12)
{
	feet3=feet3+1;
	inch3=inch3-12;
}
printf("the sum is % feet and %d inch",feet3,inch3);
getch();
}
