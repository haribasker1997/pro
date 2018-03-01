#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int a,b,c=0,d;
    scanf("%d",&a);
    d=a;
    do{
        b=d%10;
        c=c+pow(b,2);
        d=d/10;
    }while(d%10!=0);
    printf("%d",c);
    getch();
}
