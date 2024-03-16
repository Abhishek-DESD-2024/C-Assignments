#include <stdio.h>
int main(void)
{

	int num;
	int rem,sum;

	printf("Enter a number:>");
	scanf("%d",&num);


	int temp = num;


	while(num>0)
	{

		rem=num%10;
		sum=sum*10+rem;
		num=num/10;

	}
//	printf("%d",sum);

	if (sum==temp)
		printf("%d is a numeric palindrome.",temp);
	else
		printf("%d is not a numeric palindrome.",temp);

	return 0;
}
