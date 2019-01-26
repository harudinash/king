#include <stdio.h>

int main()
{   
    int a[1000],x=0,k,n,i,d=1;
    printf("INPUT\n");
    scanf("%d%d",&n,&k);
    //printf("\nOUTPUT\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(k<=n)
    { 
        
    
    for(i=0;i<k;i++)
    {
        x=x+a[i];
    }
    printf("Output :\n %d",x);
    }
    
    else
    printf("Invalid input");
    return 0;
}
