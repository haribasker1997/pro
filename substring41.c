#include<stdio.h>
void main()
{
    char a[20],b[20];
    int m,n,i,j,count=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
    scanf("%s",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%s",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                count++;
            }
        }
    }
    if(count==m)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    }
    
