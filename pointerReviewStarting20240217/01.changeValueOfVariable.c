#include <stdio.h>

void addOne(int *n) { *n = *n + 1; }

int main() {
  int a = 3;
  addOne(&a);
  printf("%d\n", a);
  return 0;
}