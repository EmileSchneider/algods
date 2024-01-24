#include <stdio.h>

/*
  
-= 26. Remove Duplicates from Sorted Array =-

Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
Return k.
*/

int removeDuplicates(int* nums, int numsSize) {
  /*
    Strategy:
    1. Iterate through the array
    2. If the current element is not equal to the previous one update the write pointer 
   */
  int write = 1;

  for(int read = 1; read < numsSize; read++) {
    if(nums[read] != nums[read -1]) {
      nums[write] = nums[read];
      write++;
    }
  }
  return write;
}

int main(void) {
  int nums[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
  int expectedNums[] = {0, 1, 2, 3, 4};

  int k = removeDuplicates(nums, 9);

  if(k != 4) {
    printf("Wrong length: %i\n", k);
  }
  
  for (int i = 0; i < k; i++) {
    printf("%i, %i\n", nums[i], expectedNums[i]);
  }
}
