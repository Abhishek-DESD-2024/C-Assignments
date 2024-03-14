#include<stdio.h>


int main()

{
	float celcius;
	float fh;

	printf("Enter the temperatre in celcius:>");
	scanf("%f",&celcius);

	fh =(celcius + 32)*9/5;
	printf("fh : %.2f\n", fh);

    printf("Enter the temperature in fh:>");
	scanf("%f", &fh);

	celcius =(fh - 32)*5/9;
	printf("celcius : %.2f", celcius);






}











































