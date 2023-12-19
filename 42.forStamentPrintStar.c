#include <stdio.h>

int main() {
  int N;
  printf("N: ");
  scanf("%d", &N);
  for (int count = 1; count <= N; count++) {
    printf("*");
  }
  printf("\n");
  return 0;
} 