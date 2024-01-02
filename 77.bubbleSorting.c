#include <stdio.h>

int main() {
  int i, j, v[5];
  printf("Please enter five integer: ");

  for (i = 1; i <= 5; i++) {
    scanf("%d", &v[i - 1]);
  }
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4 - i; j++) {
      if (v[j] > v[j + 1]) {
        int t = v[j];
        v[j] = v[j + 1];
        v[j + 1] = t;
      }
    }
  }
  for (i = 0; i < 5; i++) {
    printf("%d ", v[i]);
  }
  printf("\n");
  return 0;
}