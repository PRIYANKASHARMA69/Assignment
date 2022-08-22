#include<stdio.h>
#include<conio.h>
void main()
{
	int amount;
	float rate;
	int year;
	float temp;

	printf("Enter Amount");
	scanf("%d",&amount);
	printf("Enter Rate");
					scanf("%f",&rate);
	printf("How many years");
	scanf("%d",&year);
	temp=(amount*rate*year)/100;
	printf("Final Amount %f",temp);
	getch();
}