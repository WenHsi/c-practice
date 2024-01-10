#include <stdio.h>
void sort(int *, int *);
void swap(int *, int *);

int main() {
  int a, b;
  printf("Please enter two integers: ");
  scanf("%d %d", &a, &b);
  printf("Before a: %d\n", a);
  printf("Before b: %d\n", b);
  sort(&a, &b);
  printf("After a: %d\n", a);
  printf("After b: %d\n", b);
  return 0;
}

void sort(int *a, int *b) {
  if (*a > *b) {
    swap(&*a, &*b);
  }
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
