#include <stdio.h>

int main() {
  int a, b;

  for (int i = 1; i <= 15; ++i) {
    int j = 30 - i;
    printf("(%d %d)", i, j);
    if (i + j == 30 && i * j == 221) {
      printf("i = %d , j = %d\n", i, j);
    }
  }
  return 0;
}