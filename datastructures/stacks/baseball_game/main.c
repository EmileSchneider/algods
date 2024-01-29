#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/*
  682. Baseball Game

  You are keeping the scores for a baseball game with strange rules. At the beginning of the game, you start with an empty record.

  You are given a list of strings operations, where operations[i] is the ith operation you must apply to the record and is one of the following:

  An integer x.
  Record a new score of x.
  '+'.
  Record a new score that is the sum of the previous two scores.
  'D'.
  Record a new score that is the double of the previous score.
  'C'.
  Invalidate the previous score, removing it from the record.
  Return the sum of all the scores on the record after applying all the operations.

  The test cases are generated such that the answer and all intermediate calculations fit in a 32-bit integer and that all operations are valid.
 */
int calPoints(char** operations, int operationsSize) {
  int stack[1001] = {0};
  int stackPointer = 0;

  for(int i=0; i<operationsSize; i++) {
    char* op = operations[i];

    if(isdigit(*op) > 0) {
      stack[stackPointer] = atoi(op);
      stackPointer++;
    } else if (*op == '-') {
      stack[stackPointer] = op[1] * -1;
      stackPointer++;
    }
    else if (*op == '+') {
      int prev_1 = stack[stackPointer - 1];
      int prev_2 = stack[stackPointer - 2];
      stack[stackPointer] = prev_1 + prev_2;
      stackPointer++;
    } else if (*op == 'D') {
      int prev_1 = stack[stackPointer - 1];
      stack[stackPointer] = prev_1 * 2;
      stackPointer++;
    } else if (*op == 'C') {
      stackPointer--;
    }
  }

  int sum = 0;
  for(int i=0; i<stackPointer;i++) {
    sum += stack[i];
  }

  return sum;
}


int main(void) {
  /* char* operations[] = { "5", "2", "C", "D", "+" }; */
  /* int res = calPoints(operations, 5); */
  /* printf("RES: %i\n", res); */
  
  char* operations_two[] = { "5", "-2", "4", "C", "D", "9", "+", "+" };
  int res_two = calPoints(operations_two, 8);
  printf("RES: %i\n", res_two);  
}
