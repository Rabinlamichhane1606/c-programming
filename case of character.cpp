//Write a program to convert case of character input from user
#include<stdio.h>
#include<conio.h>
main()
{
	char a;
	printf("Enter a character=");
	scanf("%c",&a);
	if (a>='a'&&a<='z')
{
		printf("upper case of %c is %c",a,a-32);
	}
	else if (a>='A'&&a<='Z')
	{
	printf("lower case of %c is %c",a,a+32);
	}
	else
	{
	printf("It is not a alphabet");
	}
	getch();
}
