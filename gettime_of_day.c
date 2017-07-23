#include <sys/time.h>
#include <stdio.h>
#include <unistd.h>

/*gettimeofday unit: us*/
int main()
{
	int i=10000000;
	struct timeval tvs,tve;
	gettimeofday(&tvs,NULL);
	while (--i);
	sleep(1);	/*1s*/
	gettimeofday(&tve,NULL);
	double span = tve.tv_sec-tvs.tv_sec + (tve.tv_usec-tvs.tv_usec)/1000000.0;
	printf("time: %.12f\n",span);
	return 0;
}
