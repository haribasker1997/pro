#include<stdio.h>
#include<string.h>
void main()
{
    char a[50],b[50];
    int c,d,i,count=0;
    scanf("%s",&a[i]);
    scanf("%s",&b[i]);
    c=strlen(a);
    d=strlen(b);
    if(c!=d)
    {
        printf("not equal");
    }
    else
    {
        for(i=0;i<d;i++)
        {
                count++;
            }
        }
        if(count==d)
        {
            printf("EQUAL");
        }
        else
        {
            printf("NOT EQUAL");
        }
    }
