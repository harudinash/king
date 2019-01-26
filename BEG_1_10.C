#include <stdio.h>

int main()
{   
    int n,a=0,b;
    printf("Input : \n");
    scanf("%d",&n);
    while(n)
    {
        n=n/10;
        a++;
    }
    printf("\nOutput : %d",a);
    return 0;
}
