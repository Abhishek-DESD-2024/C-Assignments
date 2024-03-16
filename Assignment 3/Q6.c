#include <stdio.h>

int main(void)
{

	int num;
	printf("Enter the number:>");
	scanf("%d",&num);


	int i=1;
//	int j=1;


	while (i<=num/2)
	{
		if (num % i == 0)
			printf("%d, ",i);

	i++;
	}





























	return 0;

}
