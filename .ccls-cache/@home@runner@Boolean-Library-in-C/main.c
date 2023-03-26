#include "boolean.h"
#include <stdio.h>
#include <string.h>

int number_verification(int r, int n) {
  if (n > r)
    return True;
  else
    return False;
}

int main(void) {
  /* The best form for "easily implementation"
  int r = 4;
  int n = 5;

  if (number_verification(r, n) == True)
    printf("True!");
  else
    printf("False!!");
*/

  // The form more "high level"
  int r = 4;
  int n = 5;
  boolean Result = True;

  if (number_verification(r, n) == Result)
    printf("True!");
  else
    printf("False!!");


  return 0;
}