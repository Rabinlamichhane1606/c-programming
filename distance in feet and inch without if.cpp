#include<stdio.h>
#include<conio.h>
main()
{
	int feet1,feet2,inch1,inch2,feet3,inch3;
	printf("Enter  distance in feet");
	scanf("%d%d",&feet1,&feet2);
	printf("Enter a distance in inch");
	scanf("%d%d",&inch1,&inch2);
	inch3=inch1+inch2;
	feet3=feet1+feet2+inch3/12;
	inch3=inch3%12;
	printf("The sum of distance is %d feet and %d inch",feet3,inch3);
	getch();
	
}
//without if

