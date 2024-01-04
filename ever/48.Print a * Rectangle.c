#include <stdio.h>

int main() {
  int N;
  printf("Please enter the integer to show the * rectangle: ");
  scanf("%d", &N);
  for (int i = 1; i <= N; ++i) {
    for (int j = 0; j < N; ++j) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}