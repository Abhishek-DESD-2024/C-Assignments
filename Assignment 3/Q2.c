#include <stdio.h>


int main(void)

{
	int num;
	printf("Input:");
	scanf("%d",&num);
	printf("Output:\n");
	int i=1;
	while(i<11)
	{
		printf("%d * %d = %d \n",num,i,num*i);
		i++;

	}



}
