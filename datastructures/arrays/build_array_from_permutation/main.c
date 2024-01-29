#include <stdio.h>
#include <stdlib.h>

int* buildArray(int* nums, int numsSize, int* returnSize) {
  int* res_array_ptr = (int*) malloc (numsSize * sizeof(int));

  for(int i = 0; i < numsSize; i++ ) {
    res_array_ptr[i] = nums[nums[i]];
  }

  *returnSize = numsSize;
  
  return res_array_ptr;
}
/*
  Given a zero-based permutation nums (0-indexed), build an array ans of the same length where ans[i] = nums[nums[i]] for each 0 <= i < nums.length and return it.

A zero-based permutation nums is an array of distinct integers from 0 to nums.length - 1 (inclusive).
 */
int main(void) {
  int nums[] = {0, 2, 1, 5, 3, 4 };
  int returnSize = 5;
  int* res_array_ptr = buildArray(nums, 5, &returnSize);
  for(int i = 0; i < 5; i++) {
    printf("%i\n", res_array_ptr[i]);
  }
}
