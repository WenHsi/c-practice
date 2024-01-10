#include <stdio.h>
void sortTwoNum(int *, int *);

int main() {
  int a, b;
  printf("Please enter the two integer: ");
  scanf("%d %d", &a, &b);
  printf("Before a: %d\n", a);
  printf("Before b: %d\n", b);
  sortTwoNum(&a, &b);
  printf("After a: %d\n", a);
  printf("After b: %d\n", b);
  return 0;
}

void sortTwoNum(int *a, int *b) {
  int max = *a;
  if (max > *b) {
    *a = *b;
    *b = max;
  }
}