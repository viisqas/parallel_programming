#include <omp.h>
#include <iostream>
#include <stdio.h>


int main () {
	#pragma omp parallel num_threads(8)
	{
    	printf ("Number of threads - %d, Threads number - %d, Hello world!", omp_get_num_threads(), omp_get_thread_num());
	}
	return 0;
}