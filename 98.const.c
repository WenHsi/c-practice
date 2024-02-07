#include <stdio.h>

int main() {
  int a[3] = {2, 5, 9};
  const int b[3] = {9, 15, 29};
  // Error! read-only
  // b[0] = 111;
  const char *c = "Kevin";
  char d[] = "Wenwu";
  char *e = *&*&d;
  printf("%p\n", c);
  printf("%p\n", e);
  printf("%s\n", e);
  printf("%d\n", b[0]);
  return 0;
}