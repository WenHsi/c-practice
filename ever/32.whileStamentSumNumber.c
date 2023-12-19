#include <stdio.h>
int main() {
  int input;
  int sum = 0;
  printf("Please enter the number to sum. Until Enter 0. (quit: 0): ");
  scanf("%d", &input);
  while (input != 0) {
    sum = sum + input;
    scanf("%d", &input);
  }
  printf("The sum is: %d.\n", sum);
  return 0;
}