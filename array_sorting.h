/* 
    This header will implement all array sorting algorithms
*/

#include "help_functions.h"

void insertion_sort(int* arr, int len){

    int key, j;

    if(len > 1){

        for(int i = 1; i < len; i++){
            key = arr[i];
            j = i - 1;
            while((key < arr[j]) && (j >= 0)){
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key; 
        }

    }
}

// --------------- MERGE SORT ---------------
void merge_divide(int ini, int end){
    int mid;

    printf("Ini: %d,\tEnd:%d,\tDist:%d\n", ini, end, end - ini);

    if(ini != end){
        mid = (end + ini) / 2;
        merge_divide(ini, mid);
        merge_divide(mid + 1, end);
    }
}

void merge_sort(int *arr, int len){
    printf("\n\n");
    merge_divide(0, len - 1);
    printf("\n\n");
}
// ------------------------------------------