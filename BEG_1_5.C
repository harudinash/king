#include <stdio.h>

int main()
{
 int a,b,c,d,e,i,j;
 printf("Input\n");
 scanf("%d%d%d",&a,&b,&c);
 if((a>b)&&(a>c))
 printf("Output\n%d",a);
 else if((b>a)&&(b>c))
 printf("Output\n%d",b);
 else
 printf("Output\n%d",c);
 
    return 0;
}
