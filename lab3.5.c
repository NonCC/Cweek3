#include<stdio.h>

int main()
{
int a;
scanf("%d",&a);
if (a>=420 && a<=1250)
{
if (a%10!=6)
{
printf("1");
}
else
{
printf("0");
}
}
    return 0;
}