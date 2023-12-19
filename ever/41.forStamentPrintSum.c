#include <stdio.h>

int main() {
  int sum = 0;
  int max;
  printf("Please enter the number from which you want to calculate the sum of "
         "numbers: ");
  scanf("%d", &max);
  for (int count = 1; count <= max; count++) {
    sum += count;
  }
  printf("%d\n", sum);
  return 0;
}