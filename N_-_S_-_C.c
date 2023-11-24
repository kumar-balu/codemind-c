#include<stdio.h>
int main()
{
    int n,a,i;
    scanf("%d%d",&n,&a);
    for(i=++n;i<a;i++)
    printf("%d %d %d
",i,i*i,i*i*i);
}