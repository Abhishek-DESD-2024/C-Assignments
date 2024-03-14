#include<stdio.h>

int main(void){

     int num1, num2;

	 printf("Enter the numbers : ");
	 scanf("%d %d", &num1, &num2);

	 if(num1>num2){

	      printf("num1 is greater \n");
	 }
	 else{

          printf("num2 is greater \n");
	 }


     (num1>num2)? printf("num1 is greater"): printf("num2 is greater");


}



