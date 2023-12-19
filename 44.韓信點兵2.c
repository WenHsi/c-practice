#include <stdio.h>
int main() {
  int N;
  printf("Please enter the integer: ");
  scanf("%d", &N);
  for (int count = 1; count <= N; count++) {
    if (count % 3 == 2 && count % 5 == 3 && count % 7 == 2) {
      printf("%d ", count);
    }
  }
  printf("\n");
  return 0;
}