#include <stdio.h>

int main() {
  int a[3] = {2, 5, 9};
  const int b[3] = {9, 15, 29};
  // Error! read-only
  // b[0] = 111;
  printf("%d\n", b[0]);
  return 0;
}