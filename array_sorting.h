/* 
    This header will implement all array sorting algorithms
*/

#include "help_functions.h"

int* insertion_sort(int* arr, int len){

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

    return arr;
}