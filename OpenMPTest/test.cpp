
#include <omp.h>
#include <stdio.h>
#include <iostream>
int main()
{
#pragma omp parallel


	printf("Hello from thread %d, nthreads %d\n", omp_get_thread_num(), omp_get_num_threads());
	int n = 0;
	std::cin >> n;
	return 0;
}