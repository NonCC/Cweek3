#include<stdio.h>

int main()
{
    int a,b,c,d;
    float w,x,y,z;
    scanf("%d %f",&a,&w);
    scanf("%d %f",&b,&x);
    scanf("%d %f",&c,&y);
    scanf("%d %f",&d,&z);
    printf("%5d %10.2f\n",a,w);
    printf("%5d %10.2f\n",b,x);
    printf("%5d %10.2f\n",c,y);
    printf("%5d %10.2f\n",d,z);
    return 0;
}