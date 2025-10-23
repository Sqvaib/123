#include "../include/advanced_array_function.h"

int max_subarray_sum(int* nums, int size) {
    if (size <= 0){
        return 0;
    }
    int maxs = nums[0];
    int sum = nums[0];
    for (int i = 1; i < size; i++){
        if(sum < 0){
            sum = nums[i];
        } else{
            sum += nums[i];
        }
        if(sum > maxs){
            maxs = sum;
        }
    }
    return maxs;
}

int length_of_lis(int* nums, int numsSize) {
    return 0;
}

int* merge(int* intervals, int intervalsSize, int* returnSize) {
    return NULL;
}

