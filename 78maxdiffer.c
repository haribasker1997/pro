#include<stdio.h>
void main()
{
    int a[100],i,j,n,t;
    scanf("%d",&n);
    printf("enter the arrays:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        for(i=0;i<n;i++)
        {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("%d",a[n-1]-a[0]);
}
