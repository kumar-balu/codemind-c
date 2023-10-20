#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    y=4*x;
    if (y<=1000)
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }
}