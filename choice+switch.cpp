#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	float a,b,c,area,s,s1;
	int ch;
	printf("\n**Menu**");
	printf("\n1.Circle");
	printf("\n2.Rectangle");
	printf("\n3.Square");
	printf("\n4.TRiangle");
	printf("\nEnter Your choice");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
		printf("Enter Radius");
		scanf("%f",&a);
		area=3.14*a*a;
		printf("Area is %f",area);
		break;
	case 2:
		printf("Enter length and breadth");
		scanf("%f%f",&a,&b);
		area=a*b;
		printf("Area is %f",area);
		break;
	case 3:
		printf("Enter length");
		scanf("%f",&a);
		area=a*a;
		printf("Area is %f",area);
		break;
	case 4:
		printf("Enter length breath and height");
		scanf("%f%f%f",&a,&b,&c);
		s=(a+b+c)/2;
		s1=s*((s-a)*(s-b)*(s-c));
		area=sqrt (s1);
		
		printf("Area is %f",area);
		break;
	default:
			printf("invalid input");
	}
	getch();
}
