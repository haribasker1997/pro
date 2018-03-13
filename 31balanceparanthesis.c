#include<stdio.h>
#include<string.h>
void main()
{
    char a[10];
    int i,len,count=0,count1=0;
    scanf("%s",&a);
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        if(a[i]=='(')
        {
        count++;
    }
    else if(a[i]==')')
    {
        count1++;
    }
}
if(count==count1)
{
    printf("Yes");
}
else
{
    printf("NO");
}
}
