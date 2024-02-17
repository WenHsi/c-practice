#include <stdio.h>
void swap(int *, int *);

int main() {
  int a = 3, b = 5;
  swap(&a, &b);
  printf("A = %d\n", a);
  printf("B = %d\n", b);

  return 0;
}

void swap(int *a, int *b) {
  int t;
  t = *a;
  *a = *b;
  *b = t;
}