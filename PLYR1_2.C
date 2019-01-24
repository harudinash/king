#include <stdio.h>

int main()
{
    int i=1,j,n;
    scanf("%d",&n);
    while(n)
     {
        i=n*i;
        n--;
     }
    printf("\n%d",i);

    return 0;
}
