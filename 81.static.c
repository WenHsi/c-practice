#include <stdio.h>

int count(void) {
  static int k = 0;
  k++;
  return k;
}

int main() {
  for (int i = 0; i < 5; i++) {
    printf("%d ", count());
  }
  printf("\n");
  return 0;
}