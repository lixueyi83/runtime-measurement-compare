#include <sys/times.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

#define	WAIT()	 for(i=0;i<298765432;i++)

/*time unit: second*/
int main(int argc, char *argv[])
{
	time_t start_time = 0;
	time_t end_time = 0;
	int i, time_delta = 0;
	time(&start_time);
	WAIT();
	time(&end_time);
	time_delta = (int) (end_time - start_time);
	printf("time time = %02u:%02u:%02u\n",
			time_delta / 3600,			/* hours */
			(time_delta % 3600) / 60,	/* minutes */
			time_delta % 60);			/* seconds */
        
	exit(1);
}

