#include<stdio.h>
void main()
{
    char s[10];
    int i;
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        if(islower(s[i]))
        {
            s[i]=toupper(s[i]);
        }
        else
        {
            s[i]=tolower(s[i]);
        }
    }
    printf("%s",s);
}
