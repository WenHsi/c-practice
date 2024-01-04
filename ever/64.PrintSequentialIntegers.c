#include <stdio.h>
int sum(int);

int main() {
  int input;
  printf("Please enter the integer: ");
  scanf("%d", &input);
  printf("%d\n", sum(input));
  return 0;
}

int sum(int input) {
  if (input == 1) {
    return 1;
  }
  return sum(input - 1) + input;
}