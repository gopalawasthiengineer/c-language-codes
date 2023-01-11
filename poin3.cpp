//poniter arithmetic
#include<stdio.h>
int main()
{
	int a[5];
	scanf("%d",&a[5]);
	int *p=&a[0];
	int *q=&a[0];
	p=p+1;
	printf("%d",*p);
}

