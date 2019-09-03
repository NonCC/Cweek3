#include<stdio.h>

int main()
{
char a,b,c;
scanf("%c %c %c",&a,&b,&c);
if (a<=b && a<=c)
{
printf("%c",a);
}
else if (b<=a && b<=c)
{
printf("%c",b);
}
else if (c<=a && c<=b)
{
printf("%c",c);
}
    return 0;
}