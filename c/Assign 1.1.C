#include<stdio.h>
#include<conio.h>
void main()
{
	char name[10],address[50];
	int dob,age;
	clrscr();
	printf("Enter Your Name");
	scanf("%s",&name);
	printf("Enter Your Birth date\n");
	scanf("%d",&dob);
	printf("Enter Your Age\n");
	scanf("%d",&age);
	printf("Enter Your Address\n");
	scanf("%s",&address);
	printf("-------------------------");
	printf("My name is %s\n",name);
	printf("My Birth date is %d\n",dob);
	printf("My age is %d\n",age);
	printf("My address is %s",address);
	getch();

}