#include<stdio.h>
int main()
{
    int t,s,b,capacity,kb;
    scanf("%d%d%d",&t,&s,&b);
    capacity=(2*t*s*b*512);
    kb=capacity/1024;
    printf("%d KB",kb);
}