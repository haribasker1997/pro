#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string a="Answer";
    string b;
    cout<<"\nEnter the string:";
    cin>>b;
    int l=a.size();
    int m=a.size();
    int j=0;
    for(int i=l;i<l+m;i++)
    {
        b[i]=a[j];
        j++;
    }
   for(int i=0;i<l+m;i++)
   {
       cout<<b[i];
   }
}
