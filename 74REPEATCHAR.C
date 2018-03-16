#include<stdio.h>
void main()
{
    char a[100];
    int i,j,count=0,l;
    printf("enter the string:");
    scanf("%s",&a);
    l=strlen(a);
    for(i=0;i<l-1;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
    }
    if(count==0)
    {
        printf("NOT REPEAT");
        
    }
    else
    {
        printf("REPEAT");
    }
}
