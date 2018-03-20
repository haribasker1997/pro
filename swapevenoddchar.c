#include <stdio.h>
#include <string.h>
int main(){
     char s[20],a;
     int i,b;
     printf("\nEnter a string:");
     scanf("%s",&s);
     b=strlen(s);
     for(i=0;i<b;i=i+2)
     {
     a = s[i];
     s[i] = s[i+1];
     s[i+1] = a;
     }
     printf("%s",s);
}
