#include <stdio.h>

int main()
{
 char f;
 printf("Input\n");
   scanf("%c",&f);
   printf("Output\n");
   if(((f>64)&&(f<91))||((f>96)&&(f<123)))
   printf("Alphabet");
   else
   printf("No");
    return 0;
}
