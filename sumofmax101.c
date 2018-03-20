#include<stdio.h>
void main()
{
    int a[100],n,i,j=0,t,sum=0;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the array values:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
    printf("%d",a[i]);
    if(a[i]==0)
    {
        
    }
    }
}
