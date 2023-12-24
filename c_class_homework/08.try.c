#include <stdio.h>

int main() {
  int coke;
  int bottle;
  int total;
  printf("Please enter the integer: ");
  scanf("%d", &coke);

  bottle = 0;
  total = 0;

  while (coke >= 1) {
    total = total + coke;
    bottle = bottle + coke;
    coke = bottle / 3;
    bottle = bottle % 3;
  }

  printf("Answer: %d\n", total);
  return 0;
}