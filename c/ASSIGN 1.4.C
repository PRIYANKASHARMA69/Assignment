#include<stdio.h>
#include<conio.h>
void main()
{
	int years, days;
	int temp;
	clrscr();
	printf("Enter year");
	scanf("%d",&years);
	temp=years*365;
	printf("Year into Day %d",temp);
	printf("Enter Days");
	scanf("%d",&days);
	temp=days/365;
	printf("%d",temp);

	getch();



}