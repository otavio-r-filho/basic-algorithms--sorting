/* 
    This header will implement all array sorting algorithms
*/

#include "help_functions.h"
// --------------- FUNCTIONS PROTOTYPES ---------------
// ----------------- INSERTION SORT -------------------
void insertion_sort(int *arr, int len);

void merge_sort(int *arr, int len);
void merge_divide(int *arr, int ini, int end);
void merge_conquer(int* arr, int ini, int mid, int end);
// ----------------------------------------------------


// ------------------ INSERTION SORT ------------------
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
void merge_sort(int *arr, int len){
    merge_divide(arr, 0, len - 1);
}

void merge_divide(int *arr, int ini, int end){
    int mid;

    if(ini != end){
        mid = (end + ini) / 2;
        merge_divide(arr, ini, mid);
        merge_divide(arr, mid + 1, end);
        merge_conquer(arr, ini, mid, end);
    }
}

void merge_conquer(int *arr, int ini, int mid, int end){

    int left_idx = ini, right_idx = mid + 1;

    int temp_size = end - ini + 1, temp_idx = 0;
    int *temp_arr = (int*) malloc(temp_size * sizeof(int));

    while(temp_idx < temp_size){
        if((left_idx < mid + 1) && (right_idx < end + 1)){
            if(arr[left_idx] < arr[right_idx]){
                temp_arr[temp_idx++] = arr[left_idx++];
            }else{
                temp_arr[temp_idx++] = arr[right_idx++];
            }
        } else {
            if(left_idx < mid + 1){
                temp_arr[temp_idx++] = arr[left_idx++];
            }else{
                temp_arr[temp_idx++] = arr[right_idx++];
            }
        }
    }

    printf("Unordered left subarray: ");
    print_array(arr, ini, mid);
    printf("\n");

    printf("Unordered right subarray: ");
    print_array(arr, mid + 1, end);
    printf("\n");

    printf("Ordered subarray: ");
    print_array(temp_arr, 0, temp_size - 1);
    printf("\n\n");

    for(temp_idx = 0; temp_idx < temp_size; temp_idx++){
        arr[temp_idx + ini] = temp_arr[temp_idx];
    }

    free(temp_arr);
}
// ------------------------------------------