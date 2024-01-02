#include <stdio.h>

int main() {
  int i, v[9];

  for (i = 1; i <= 9; i++) {
    v[i - 1] = i;
  }

  for (i = 0; i < 9; i++) {
    printf("%d ", v[i]);
    if (i % 3 == 2) {
      printf("\n");
    }
  }
  return 0;
}