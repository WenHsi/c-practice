#include <stdio.h>

int main() {
  int N;
  printf("Please enter the integer to show consecutive numbers: ");
  scanf("%d", &N);

  int count = 1;
  while (count <= N) {
    printf("%d\n", count);
    ++count;
  }
  return 0;
}