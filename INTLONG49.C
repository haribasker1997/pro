#include<stdio.h>
void main()
{
    int a;
    printf("enter the a:");
    scanf("%d",&a);
    if(a>=-32768 && a<=32767)
    {
        printf("INT");
    }
    else
    {
        printf("LONG LONG");
    }
}
