#include <stdio.h>

int main() {
  int v[5] = {1, 2, 3};
  int *p[5] = {&v[0], &v[1], v + 2, v + 3, v + 4};

  *p[3] = 10;
  *p[4] = 20;

  for (int i = 0; i < 5; i++) {
    printf("Before: %d\n", *p[i]);
  }

  for (int i = 0; i < 5; i++) {
    *p[i] = 0;
    printf("After: %d\n", *p[i]);
  }

  *p[2] = 999;
  printf("Change: %d\n", *p[2]);

  return 0;
}