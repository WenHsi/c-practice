#include <stdio.h>
int main() {
  int a, b, c, t;
  printf("Please enter three integers: ");
  scanf("%d%d%d", &a, &b, &c);
  printf("Before: %d %d %d\n", a, b, c);
  //從右換到左
  if (c < b) {
    t = c;
    c = b;
    b = t;
  }
  if (c < a) {
    t = c;
    c = a;
    a = t;
  }
  if (b < a) {
    t = b;
    b = a;
    a = t;
  }
  //從左換到右
  // if (b < a) {
  //   t = b;
  //   b = a;
  //   a = t;
  // }
  // if (c < a) {
  //   t = c;
  //   c = a;
  //   a = t;
  // }
  // if (c < b) {
  //   t = c;
  //   c = b;
  //   b = t;
  // }
  printf("After: %d %d %d\n", a, b, c);
  return 0;
}