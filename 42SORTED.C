#include<stdio.h>
void main()
{
    int a[100],i,j,flag=0,count=0,n;
    printf("enter n:");
    scanf("%d",&n);
    printf("enter the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                flag=1;
            }
            else
            {
                count=1;
            }
        }
    }
    if(flag==1&&count==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
