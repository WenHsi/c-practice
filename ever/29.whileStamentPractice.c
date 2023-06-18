#include <stdio.h>
int main() {
  int a = 5;
  while (a < 10) {
    printf("%d\n", a);
    a = a + 1;
  }
  printf("%d\n", a);
  return 0;
}