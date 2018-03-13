#include<stdio.h>
void main()
{
    int i,n;
    scanf("%d",&n);
    for(i=3;i<n;i++)
    {
        if(i%3==0 && n%i==0)
        {
            printf("%d",i);
        }
    }
}
