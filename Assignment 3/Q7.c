#include <stdio.h>


int main(void)
{
	int num;
	printf("Input:");
	scanf("%d",&num);

	int i=1;
	int temp =num;

	while((i*i)<=num )
	{
		printf("%d * %d = %d\n",i,(num/i),temp);

	i++;
	}

	return 0;

}
