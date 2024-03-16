#include <stdio.h>

int main(void)


{

	int num;
	int fact=1;
	int i=1;
	printf("Enter a number:>");
	scanf("%d",&num);

	while(i<=num)
	{
		fact=fact*i;
		i++;

	}
	printf("factorial of a given number is %d\n.",fact);

	return 0;
}
