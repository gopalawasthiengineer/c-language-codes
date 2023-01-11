#include<stdio.h>
int main()
{
	int a=10,b=20;
	printf("before swipe a=%d b=%d,a,b");
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n after swap a=%d b=%d,a,b");
	return 0;
}
