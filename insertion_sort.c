#include <stdio.h>
#include <stdlib.h>
#include "help_functions.h"
#include "array_sorting.h"

int main(int argc, char **argv){

	int len = 10;
	int i;

	int *random_nums;
	random_nums = get_random_array(len, 100);

	printf("Unordered sequence:\n");
	for(i = 0; i < len; i++){
		printf("%d\t", random_nums[i]);
	}
	printf("\n");

	random_nums = insertion_sort(random_nums, len);

	printf("Ordered sequence:\n");
	for(i = 0; i < len; i++){
		printf("%d\t", random_nums[i]);
	}
	printf("\n");
	
	return 0;
}
