#include<stdio.h>
void main()
{
    
    int m,n,i,j,count=0,a[20],b[20],k;
    printf("enter n:");
    scanf("%d",&n);
    printf("enter the array a:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("enter m:");
    scanf("%d",&m);
    printf("enter array b:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(j=0;j<n;j++)
    {
        for(k=0;k<m;k++)
        {
            if(b[k]==a[j])
            {
                count++;
            }
        }
    }
    if(count==i)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    }
