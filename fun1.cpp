#include<stdio.h>

void sum();
int main()
{
	sum();
	return 0;
}
void sum()
{
	int a,b,sum=0;
	printf("enter the two numer=");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("sum=%d\n",sum);
}
