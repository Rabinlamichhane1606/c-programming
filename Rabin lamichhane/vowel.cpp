#include<stdio.h>
#include<conio.h>
main()
{
	char ch;
	printf("Enter a character=	");
	scanf("%c",&ch);
	if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
	{
		printf("The variable you entered is a vowel");
	}
	else
	{
		printf("The variable you entered is not a vowel");
	}
	getch();
	}
