#include<stdio.h>
int main()
{
    int a,h,k,m,s;
    scanf("%d",&a);
    h=a/3600;
    m=a%3600;
    k=m/60;
    s=m%60;
    printf("H:M:S-%d:%d:%d",h,k,s);
}