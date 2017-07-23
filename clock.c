//vi test1.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*clock unit: ms*/
int main(void )
{
	long i=800L;
   	clock_t start, finish;
   	double  duration;

   	printf( "Time to do %ld empty loops is ", i );
  	start = clock();
  	while (--i)
		system("cd");
   	finish = clock();
   	duration = (double)(finish - start) / CLOCKS_PER_SEC;

  	printf( "%f seconds\n", duration );
   	return 0;
}
