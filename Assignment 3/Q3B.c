#include <stdio.h>




int main(void)
 {
 
     int num,rem,sum;
     printf("Enter a number:");
     scanf("%d",&num);
 
 
     while (num > 0)
     {
         rem=num%10;
         sum=sum*10+rem;
         num=num/10;
 
 //      printf("%d ",sum);
     }
 
 
         printf("%d ",sum);
 
 
     return 0;
 }
       
