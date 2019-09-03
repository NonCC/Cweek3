#include<stdio.h>

int main()
{
    char a;
    scanf("%c",&a);
    a>=65 && a<=90 ? printf("%c",a+32) : printf("%c",a);
    return 0;
}