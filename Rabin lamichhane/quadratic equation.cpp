#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
float a,b,c,x1,x2,s;
printf("Enter the value of a=");
scanf("%f",&a);
printf("Enter the value of b=");
scanf("%f",&b);
printf("enter the value of c=");
scanf("%f",&c);
s=sqrt(b*b-4*a*c);
x1=(-b-s)/(2*a);
x2=(-b+s)/(2*a);
printf("the quadratic value is %.2fand%.2f",x1,x2);
getch();
}
