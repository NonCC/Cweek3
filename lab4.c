#include<stdio.h>

int main()
{
char a;
scanf("%c",&a);
if(a>=65 && a<=90)
{
switch (a)
{
case 'E':
    printf("Hello\n"); 
    break;
case 'C':
     printf("Ni hao\n");
    break;
case 'J':
     printf("Konnichi wa\n");
    break;
case 'T':
     printf("Sawasdee\n");
    break;
default:
printf("Go away!!\n");
    break;
}
}
printf("Bye!!\n");
    return 0;
}