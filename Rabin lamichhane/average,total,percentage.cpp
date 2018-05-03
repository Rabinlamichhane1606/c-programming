#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
float s1,s2,s3,s4,s5,s6,s7,average,percentage,totalMarks=700,total;
printf("Enter the marks obtained:\n");
scanf("%f%f%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5,&s6,&s7);
total=s1+s2+s3+s4+s5+s6+s7;
average=total/7;
percentage=total/totalMarks*100;
printf("total marks is %.0f\naverage is %.0f\npercentage is %.0f",total,average,percentage);
getch();
}
