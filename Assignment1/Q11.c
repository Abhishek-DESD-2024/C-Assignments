#include <stdio.h>
#include <limits.h>



int main()
{

	printf("--------------------------------------------------------------------------------------------------------------\n");
	printf("Data Type             Size                      FS                                    Range                    \n");
    printf("--------------------------------------------------------------------------------------------------------------\n");
	printf("char                  %ld                      %%c                                  %d  to  %d    \n",sizeof(char),SCHAR_MIN,SCHAR_MAX );
	printf("unsigned char         %ld                      %%c                                  %d  to  %d    \n",sizeof(char),0,UCHAR_MAX );
	printf("short int             %ld                      %%hd                                 %d  to  %d    \n",sizeof(short int),SHRT_MIN,SHRT_MAX );
	printf("unsigned short int    %ld                      %%hu                                 %d  to  %d    \n",sizeof(unsigned short int),0,USHRT_MAX );
	printf("int                   %ld                      %%d                                  %d  to  %d    \n",sizeof(int),INT_MIN,INT_MAX );
	printf("unsigned int          %ld                      %%u                                  %d  to  %d    \n",sizeof(unsigned int),0,UINT_MAX );
	printf("long int              %ld                      %%ld                                 %ld to  %ld    \n",sizeof(long int),LONG_MIN,LONG_MAX );
	printf("unsigned long int     %ld                      %%lu                                 %d  to  %lu    \n",sizeof(unsigned long int),0,ULONG_MAX );













}




























































