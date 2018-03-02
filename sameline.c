#include<stdio.h>
void main()
{
    int a[10],b[10],i,count=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
    if(a[i]==0)
    {
        count++;
    }
}
if(count==3)
{
    printf("Yes");
}
else
{
    printf("No");
}
}
