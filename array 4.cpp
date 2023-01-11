// count postive negative zero number in array
#include<stdio.h>
int main()
{
	int n,i,a[i],p=0,N=0,z=0;
	printf("enter value of array size=");
	scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("enter the value=");
	scanf("%d",&a[i]);
}
	for(i=0;i<n;i++)
{
if(a[i]>0)
p++;
else if(a[i]<0)
N++;
else
z++;
}
printf("postive number %d\n",p);
printf("negative number %d\n",N);
printf("zero number %d\n",z);
return 0; 
}
