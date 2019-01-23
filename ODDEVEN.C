#include<stdio.h>
void main()
{
int a,b;
clrscr();
scanf("%d",&b);
while(b)
{
scanf("%d",&a);
if(a>0)
{
if(a&1==1)
	{printf("Odd\n");
	}
	else
	{printf("Even\n");
	}
}
else
printf("Invalid input\n");

b--;
}
getch();
}