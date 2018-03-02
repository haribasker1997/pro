#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int i,l=0,j;
    scanf("%[^\n]s",&a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]==32)
        {
            for(j=i;j<l;j++)
            {
                a[j]=a[j+1];
            }
            printf("%s",a);
        }

        }
