#ifndef _HELPER_FUNCTIONS_H_
#define _HELPER_FUNCTIONS_H_

#include <time.h>
#include <stdlib.h>

typedef enum {false, true} bool;

int* get_random_array(int len, int range){
    /* 
        This function will return 
    */

	int *random_nums;
	random_nums = malloc(len * sizeof(int));

	srand(time(NULL));

	for(int i = 0; i < len; i++){
		random_nums[i] = rand() % range;
	}

	return random_nums;
}

#endif
