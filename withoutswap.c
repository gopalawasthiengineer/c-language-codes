#include<stdio.h>
int main()
{
	 int a=10,b=5;
    // int c;
    // c=a;
    // a=b;
    // b=c;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d\n%d",a,b);
    return 0;
}
