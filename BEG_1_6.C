#include<stdio.h>
void main()
{
 int a,b,i,j,l,k,r,n;
 clrscr();
 printf("\nInput\n");
 scanf("%d",&a);
 printf("\nOutput\n");
 i=a;
    // printf("i= %d",i);

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
	     printf("\nYes");
	     }
	     else
	     printf("\nNo");
	   }
	  else if(k!=0)
	  {
	   printf("\nYes");
	   }
	   else
	   printf("\nNo");

	   }

	  else
	  printf("No");
     getch();
     }