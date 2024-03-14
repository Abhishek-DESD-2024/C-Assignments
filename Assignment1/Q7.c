#include<stdio.h>

int main(){

    int num;
	printf("Enter the four digit value :");
	scanf("%d", &num);
	int temp = num;
	int w;
	int x;
	int y;
	int z;

	int a;
	a = num;

	int b;

	w = a % 10;
	b = a / 10;
	printf("w : %d\n", w);

	int c;

	x = b%10;
	c = b / 10;
	printf("x : %d \n", x);

	int d;

	y = c%10;
	d = c / 10;
	printf("y : %d \n", y);

	int e;

	z = d%10;
	printf("z : %d \n",z);
	printf("Reverse no. is : %d%d%d%d \n", w,x,y,z);


	printf("a : %d \n",a);

	printf("b : %d \n",b);
    
	printf("c : %d\n",c);

	printf("d : %d\n",d);
}
