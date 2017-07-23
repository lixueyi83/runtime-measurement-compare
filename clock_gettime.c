#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define MILLION 1000000

/*clock_gettime unit: ns*/
int main(void)
{
        long int loop = 1000;
        struct timespec tpstart;
        struct timespec tpend;
        long timedif;
        clock_gettime(CLOCK_MONOTONIC, &tpstart);
        while (--loop)
		{
            system("cd");
        }
        clock_gettime(CLOCK_MONOTONIC, &tpend);
        timedif = MILLION*(tpend.tv_sec-tpstart.tv_sec)+(tpend.tv_nsec-tpstart.tv_nsec)/1000;
        fprintf(stdout, "it took %ld microseconds\n", timedif);
        return 0;
}
