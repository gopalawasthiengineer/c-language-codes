#include<stdio.h>
int main()
{
	int numbers;
	printf("enter the number");
	scanf("%d",&numbers);
	if(numbers%2==0)
	printf("%d is a even integer\n",numbers);
	else
	printf("%d is a odd integer\n",numbers);
	return 0;
}
