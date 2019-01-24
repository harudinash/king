#include<stdio.h>
void main()
{
 int a,b,i,j,l,k,r,n;
 //clrscr();
 scanf("%d%d",&a,&b);
 for(i=a+1;i<b;i++)
   { // printf("i= %d",i);

     r=i%4;
    // printf(" r=%d ",r);
     if(r==0)
      {
       k=i%100;
     // printf("k=%d ",k);
       if(k==0)
	{
	 l=i%400;
	  if(l==0)
	   {
	     printf("\n%d is leap year",i);
	     }
	   }
	  else if(k!=0)
	  {
	   printf("\n%d is leap year",i);
	   }
	   }
	  }
     getch();
     }