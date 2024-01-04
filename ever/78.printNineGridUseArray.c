#include <stdio.h>

int main() {
  int i, j, v[3][3];
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      v[i][j] = i * 3 + j + 1;
    }
  }

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d ", v[i][j]);
    }
    printf("\n");
  }
  return 0;
}