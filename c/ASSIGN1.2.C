#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,temp;
	clrscr();
	printf("Enter A:\n");
	scanf("%d",&a);
	printf("Enter B:\n");
	scanf("%d",&b);

	printf("The sum is\n");
	temp=a+b;
	printf("%d\n",temp);

	printf("The sub is\n");
	temp=a-b;
	printf("%d\n",temp);

	printf("The Multiplication is\n");
	temp=a*b;
	printf("%d\n",temp);

	printf("The div is\n");
	temp=a/b;
	printf("%d\n",temp);
	getch();
}


