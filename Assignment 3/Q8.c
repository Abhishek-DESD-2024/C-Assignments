#include <stdio.h>

int main(void)

{
	int num;
	printf("Input:");
	scanf("%d",&num);

	int i = 2;

	while(num>1)
	{
		if(num % i == 0)
		{
			printf("%d *",i);
			num = num / i ;
		}
		else
			i++;
	}

	return 0;
}
