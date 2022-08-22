#include<stdio.h>
#include<conio.h>
void main()
{
	float  PI=3.14;
	int r=3;
	int base=2;
	float height=2.3;
	int length=10,width=20,temp;
	clrscr();

	printf("Area of circle\n");
	temp=PI*r*r;
	printf("%d",temp);

	printf("Area of rect\n");
	temp=length*width;
	printf("%d",temp);

	printf("Area of triangle\n");
	temp=0.5*base*height;
	printf("%d",temp);

	 getch();
}