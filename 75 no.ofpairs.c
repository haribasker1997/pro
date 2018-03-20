#include<stdio.h>
void main()
{
    int a[100],i,j,count=0,n;
    printf("enter the size:");
    scanf("%d",&n);
    printf("enter the array values:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                count++;
            }
        }
    }
    printf("%d\n",count);
}
