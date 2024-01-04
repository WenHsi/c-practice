#include <limits.h>
#include <stdio.h>

int main() {
  unsigned int a = 1000;
  int b = a * a * a;
  int c = a * a * a * a;
  printf("%u\n", b);
  printf("%u\n", c);
  printf("----------\n");
  printf("%d\n", INT_MAX);
  printf("%d\n", INT_MIN);
  printf("%u\n", UINT_MAX);
  return 0;
}