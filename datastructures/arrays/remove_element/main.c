#include <stdio.h>

int removeElement(int* nums, int numsSize, int val) {
  int write = 0;

  for(int read = 0; read < numsSize; read++) {
    if(nums[read] != val) {
      nums[write] = nums[read];
      write++;
    }
  }
  return write;
}

/*
  Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
Return k.
 */
int main(void) {
  int nums[] = {3, 2, 2, 3 };

  removeElement(nums, 4, 2);

  for(int i =0; i < 4; i++) {
    printf("%i\n", nums[i]);
  }
}

