#include<stdio.h>
int main()
{
	int n,i,a[i],sum=0,avg;
	
	printf("enter value of array size=");
	scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("enter the value =");
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	sum=sum+a[i];
}
avg=sum/n;
printf("sum of n number %d\n",sum);
printf("avg of n number %d\n",avg);
return 0;
}
