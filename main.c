#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "help_functions.h"
#include "array_sorting.h"

int main(int argc, char **argv){

	int len = 10;
	int i;
	long start_time, finish_time;

	if(argc > 1){
		len = atoi(argv[1]);
	}

	int *random_nums;
	random_nums = get_random_array(len, 100);

	printf("Unordered sequence:\n");
	for(i = 0; i < len; i++){
		printf("%d\t", random_nums[i]);
	}
	printf("\n\n");

	start_time = clock();
	// insertion_sort(random_nums, len);
	merge_sort(random_nums, len);
	finish_time = clock();

	printf("Ordered sequence:\n");
	for(i = 0; i < len; i++){
		printf("%d\t", random_nums[i]);
	}
	printf("\n\n");

	printf("Total computation time %d", finish_time - start_time);
	
	return 0;
}
