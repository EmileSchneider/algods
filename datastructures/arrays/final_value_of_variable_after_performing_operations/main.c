#include <stdio.h>

int finalValueAfterOperations(char** operations, int operationsSize) {
  int x = 0;

  for(int i=0;i<operationsSize;i++) {
    char* op = operations[i];
    if(op[1] == '-') {
      x--;
    } else {
      x++;
    }
  }
  return x;
}

/*
  2011. Final Value of Variable After Performing Operations
  There is a programming language with only four operations and one variable X:

  ++X and X++ increments the value of the variable X by 1.
  --X and X-- decrements the value of the variable X by 1.
  Initially, the value of X is 0.

  Given an array of strings operations containing a list of operations, return
  the final value of X after performing all the operations.
 */

int main(void) {
  char* operations[] = { "X++", "++X", "--X", "X--" };

  int res = finalValueAfterOperations(operations, 4);
  printf("FINAL VAL:\t%i\n", res);
}
