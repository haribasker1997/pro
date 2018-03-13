#include<stdio.h>
void main()
{
    int a[50],b,i,temp,j;
    printf("enter the no.of array:");
    scanf("%d",&b);
    printf("enter the array:");
    for(i=0;i<b;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<b-1;i++)
    {
        for(j=i+1;j<b;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    }
    printf("\nsecond smallest=%d",a[1]);
}
