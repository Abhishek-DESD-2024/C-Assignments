#include<stdio.h>
int main(void)
{

    int n1, n2;
	int div;
	
	 printf("Enter two numbers : ");
	 scanf("%d %d", &n1, &n2);
     
	 if (n2 != 0){
	     div = n1/n2;
	     printf("Division of two numbers is : %d", div);
		 }
	 else {
	      printf("error");
  	 }



}
