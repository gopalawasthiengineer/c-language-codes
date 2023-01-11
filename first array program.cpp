#include<stdio.h>
int main()
{
	int n,i,a[i];
	printf("enter value of array size=");
	scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("enter the value =");
	scanf("%d",&a[i]);
}
printf("normal order");
	for(i=0;i<n;i++)
	{
	printf("%d\n",a[i]);
}
printf("reverse order");
for(i=n-1;i>=0;i--)
printf("%d",a[i]);
return 0;
}
