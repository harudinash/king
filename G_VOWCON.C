#include<stdio.h>
void main()
{
char a,b;
int x,y;
clrscr();
//scanf("%d",&x);
//while(x)
//{
scanf("%c",&b);
if(((b>64)&&(b<91))||((b>96)&&(b<123)))
{
if((b=='a')||(b=='A')||(b=='e')||(b=='E')||(b=='i')||(b=='I')||(b=='o')||(b=='O')||(b=='u')||(b=='U'))
{
printf("\nVowel");
}
else
printf("\nConsonant");
}
else
printf("\nInvalid input");

x--;
//}
getch();
}