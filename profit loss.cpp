#include<stdio.h>
#include<conio.h>
main()
{
	float cp,sp,profit,loss;
	printf("Enter your cost price and selling price:");
	scanf("%f%f",&cp,&sp);
	if (cp<sp)
	{
		profit=sp-cp;
	printf("Profit is %f",profit);	
	}
	else
	{
		loss=cp-sp;
	printf("Loss is %f",loss);
}
getch();
}
