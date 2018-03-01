#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
    char a[50];
    int i,len;
    printf("enter the string=");
    gets(a);
    len=strlen(a);
    for(i=len-1;i>=0;i--)
    {
    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
    {
       continue;
       }
       else
       {
     printf("%c",a[i]);
    }
    }
    }
