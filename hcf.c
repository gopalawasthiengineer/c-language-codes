#include<stdio.h>
void main()
{
	int a,b,i;
	printf("enter the two number a,b=");
    scanf("%d%d",&a,&b);
    for(i=a;i<=a||i<=b;i--)
    {
    	if(a%i==0 && b%i==0)
    	{
    	printf("%d",i);
    }
    break;
	}
}

