#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,k,l,S,max,min;
	printf("enter value of array size=");
	scanf("%d",&n);
	int a[n];
for(i=0;i<n;i++)
{
	printf("enter the value =");
	scanf("%d",&a[i]);
}
max=a[0];
min=a[0];
k=0;
l=0;
for(i=0;i<n;i++)
{
	if(a[i]>max)
	{
		max=a[i];
	k=i;
}
	if(a[i]<min)
	{
	min=a[i];
		l=i;
	}
}
S=a[k];
a[k]=a[l];
a[l]=S;
printf("after swaping array=");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
return 0;
}
