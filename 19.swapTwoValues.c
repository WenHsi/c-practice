#include <stdio.h>

int main() {
  printf("Please enter two integers: ");

  int a, b, tem;
  scanf("%d%d", &a, &b);
  printf("Before: %d %d\n", a, b);
  if (a > b) {
    tem = a;
    a = b;
    b = tem;
  }
  printf("After: %d %d\n", a, b);
  return 0;
}