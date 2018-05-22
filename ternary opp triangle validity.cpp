#include<stdio.h>
#include<conio.h>
main()
{
 float a,b,c;
 printf("eNTER THREE SIDES OF TRIANGLE");
 scanf("%f%f%f",&a,&b,&c);
 a<b+c?(b<a+c?(c<a+b?printf("The triangle is valid"):printf("The triangle is invalid")):printf("The triangle is invalid")):printf("The triangle is invalid");
 getch();
}
