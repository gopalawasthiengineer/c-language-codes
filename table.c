#include<stdio.h>
int main()
{
int a=1,b,c;
printf("enter the value=");
scanf("%d",&b);
while(a<=10)
{
    c=a*b;
    printf("%d\n",c);
    a++;
}
return 0;
}
