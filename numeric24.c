#include<stdio.h>
void main()
{
    char s[50];
    int i,flag=0;
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='0'||s[i]=='9')
        {
            flag=1;
        }
        else
        {
            break;
        }
    }
    if(flag==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
