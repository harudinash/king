#include<stdio.h>
void main()

{

 int a,b,c,d;
 clrscr();
 scanf("%d",&b);
 while(b)
 {
 scanf("%d",&a);
 if(a==0)
{ printf("zero\n");
}
 else if(a>0)
{ printf("positive\n");
 }
 else if(a<0)
 {printf("negative");
}
 b--;
 }
 getch();
 }
