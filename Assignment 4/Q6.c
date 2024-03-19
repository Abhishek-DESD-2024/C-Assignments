/*Write a function to print Pascal triangle of given number of rows*/

#include <stdio.h>


int main(void)
{

	int row;



	printf("Enter the number of rows:>");
	scanf("%d",&row);




	for (int line = 1; line <= row; line++) { 
        for (int space = 1; space <= (row-line) ; space++) 
            printf("  "); 	
        // used to represent C(line, i) 
        int coef = 1; 
        for (int i = 1; i <= line; i++) { 
            // The first value in a line 
            // is always 1 
            printf("%4d", coef); 
            coef = coef * (line - i) / i; 
        } 
        printf("\n"); 
    } 


	



}
