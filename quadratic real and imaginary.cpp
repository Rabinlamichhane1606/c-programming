#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	float a,b,c,d,x1,x2,d1;
	printf("Enter a,b,c:");
	scanf("%f%f%f",&a,&b,&c);
	d=((b*b)-4*a*c);
	if(d>0)
	{
	d1=sqrt(d);	
		x1=(-b+d1)/2*a;
		x2=(-b-d1)/2*a;
		printf("tHE ROOTS ARE REAL AND UNEQUAL WHICH ARE %f %f",x1,x2);
	}
	else if(d<0)
	{
		printf("The roots are imaginary");
	}
	else
	{
		x1=(-b)/2*a;
		x2=(-b)/2*a;
		printf("THe roots are real and equal");
	}
	getch();
}

