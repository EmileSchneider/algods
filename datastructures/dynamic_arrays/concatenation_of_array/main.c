#include <stdio.h>
#include <stdlib.h>

int* getConcatenation(int* nums, int numsSize, int* returnSize) {
  int* new_array = (int*) malloc(2 * numsSize * sizeof(int));
  *returnSize = 2 * numsSize;
  
  for(int i=0; i<numsSize; i++) {
    new_array[i] = nums[i];
    new_array[i+numsSize] = nums[i];
  }

  return new_array;
}

/*
  1929. Concatenation of Array

  Given an integer array nums of length n, you want to create an array ans of length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).

  Specifically, ans is the concatenation of two nums arrays.

  Return the array ans.
 */
