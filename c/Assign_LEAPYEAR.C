#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	clrscr();
	printf("Enter Year");
	scanf("%d",&year);


	if(year%400==0)
	{
		printf("Leap Year");
	}
	else if(year%100==0)
	{
		printf("Not Leap Year");
	}
	else if(year%4==0)
	{
		printf("Leap year");
	}
	else
	{
		printf("Not Leap Year");
	}
	getch();
}