#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x<150)
    {
        printf("The person is Dwarf.");
    }
    else if (x>150 and x<=165)
    {
        printf("The person is average heighted.");
    }
    else if (x>165 and x<=195)
    {
        printf("The person is taller.");
    }
    else 
    {
        printf("Abnormal height.");
    }
}