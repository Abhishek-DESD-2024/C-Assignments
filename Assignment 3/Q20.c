/*
	Q20.Write a program to display
		a.Prime numbers between 1 to 100
*/


#include<stdio.h>
int main()
{
	int num,a=3;
	
	while(a<=100)
 	 {
		for(int i=2; i<=(a/2); i++)
		{
			while((a%i) == 0)
			{

				printf(" %d",a);
				break;
			
	        }
		}
		a++;
	 }


	return 0;
}
