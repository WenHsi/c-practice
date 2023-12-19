#include <stdio.h>

int main() {
  int N;
  printf("Please enter the number for which you want to find the positive "
         "divisors: ");
  scanf("%d", &N);
  for (int count = 1; count <= N; count++) {
    if (N % count == 0) {
      printf("%d ", count);
    }
  }
  printf("\n");
  return 0;
}