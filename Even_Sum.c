#include<stdio.h>
#include<limits.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
}