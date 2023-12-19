#include <stdio.h>

int main() {
  int min;
  printf("Please enter the number from which you want to print numbers down to "
         "1: ");
  scanf("%d", &min);
  for (int count = 1; count <= min; count++) {
    int number = min + 1 - count;
    printf("%d\n", number);
  }
  return 0;
}