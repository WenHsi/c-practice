#include <stdio.h>
void swapNum(int *, int *);

int main() {
  int a = 5;
  int b = 10;
  printf("Before a: %d\n", a);
  printf("Before b: %d\n", b);
  swapNum(&a, &b);
  printf("After a: %d\n", a);
  printf("After b: %d\n", b);
  return 0;
}

void swapNum(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}