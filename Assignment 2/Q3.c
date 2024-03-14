#include<stdio.h>

int main(void)
{

    int num;

	printf("Enter the number : ");
	scanf("%d", &num);

	if(num>0){
          printf("positive");
    }
	else if(num<0){
          printf("negative");
	}
	else {
	      printf("zero");
    }
	return 0;

}
