#include <stdio.h>

int main()
{   
    int n,x=0;
    printf("INPUT\n");
    scanf("%d",&n);
    printf("\nOUTPUT\n");
    while(n)
    {
    x=x+n;
    n--;
    }
    printf("output :\n %d",x);
    return 0;
}
