#include <stdio.h>


int main(void)
{

	int num;
	printf("Input:");
	scanf("%d",&num);

	int sum =0;
	printf("Output:");
	while(num!=0)
	{
		sum= sum + num%10;
		num=num/10;
		 
	}
	printf("= %d \n",sum);



	return 0;
}
