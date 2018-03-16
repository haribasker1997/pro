#include<stdio.h>
void main()
{
    int a[100],i,j,k,n,count=0;
    printf("enter the no.of arrays:");
    scanf("%d",&n);
    scanf("%d",&k);
    printf("\nenter the array values:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count==k)
        {
            printf("%d",a[i]);
        }
    }
}
