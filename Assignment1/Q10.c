#include<stdio.h>
#include<math.h>
//#include<limits.h>

int main(void)

{
    float a,b,c,Perimeter,s,Area;

	printf("Enter three sides of triangle : ");
	scanf("%f %f %f", &a,&b,&c);

	Perimeter = a+b+c;
	printf("Perimeter : %.2f\n", Perimeter);
	
	s = (a+b+c)/2;
	Area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area : %f\n", Area);

	return 0;
}
