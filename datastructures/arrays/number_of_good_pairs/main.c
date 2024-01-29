#include <stdio.h>

/*
  Idea: use an array of size 101 to count the occurence of each number.
*/

int numIdenticalPairs(int* nums, int numsSize) {

  int occurences[101] = {0};
  int count = 0;

  // iterate over all pairs
  for(int i=0; i<numsSize;i++) {
    count += occurences[nums[i]];
    occurences[nums[i]]++;
  }

  return count;
}

/*
  Given an array of integers nums, return the number of good pairs.

  A pair (i, j) is called good if nums[i] == nums[j] and i < j.

  Constraints:
    1 <= nums.length <= 100
    1 <= nums[i] <= 100
 */
int main(void) {
  printf("1513. Number of Good Pairs.");
}
