#include<stdio.h>

int main(){

   int n1;
   int n2;
   int n3;

    printf("Enter the num1 :");
	scanf("%d", &n1);
    printf("Enter the num2 :");
    scanf("%d", &n2);
    printf("Enter the num3 :");
    scanf("%d", &n3);

	int add;
	add = n1+n2+n3;
	printf("add : %d\n", add);

	int avg;
	avg = add/3;
	printf("avg : %d", avg);


}
