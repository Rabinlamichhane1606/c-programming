#include<stdio.h>
#include<conio.h>
main()
{
	int age1,age2,age3,young,old;
	printf("Enter ages of three people:");
	scanf("%d%d%d",&age1,&age2,&age3);
	young=age1<age2?(age1<age3?age1:age3):(age2<age3?age2:age3);
	old=age1>age2?(age1>age3?age1:age3):(age2>age3?age2:age3);
	printf("old and young are %d and %d",old,young);
	getch();
}
