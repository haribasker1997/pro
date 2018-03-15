#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string a;
    char b;
    int i,count=0,len;
    cin>>a;
     cin>>b;
    for(i=0;a[i]!='\0';i++)
    {
          if(a[i]==b)
    {
        count++;
         
    }
    }
    printf("%d",count);
}
