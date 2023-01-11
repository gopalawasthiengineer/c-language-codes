//no.is armstrong or not
//no.is armstrong or not
#include<stdio.h>
#include<math.h>
int main()
{
	int x,p,k,l,digit=0,sum=0;
	printf("enter the number=");
	scanf("%d",&x);
	p=x;
	k=x;
	while(x!=0)
	{
	x=x/10;
	digit=digit+1;
}
while(p>0)
{
l=p%10;
sum=sum+pow(l,digit);
p=p/10;	
}
if(k==sum)
{
	printf("armstrong");
}

else{
	printf("not armstrong");
}
return 0;
}
