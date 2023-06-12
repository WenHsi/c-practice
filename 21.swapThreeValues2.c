#include <stdio.h>
int main() {
  int a, b, c, t;
  printf("Please enter three integers: ");
  scanf("%d%d%d", &a, &b, &c);
  printf("Before: %d %d %d\n", a, b, c);
  //把Ｃ換成最大，再把Ｂ換成次大，Ｃ就是最大
  if (c < a) {
    t = c;
    c = a;
    a = t;
  }
  if (c < b) {
    t = c;
    c = b;
    b = t;
  }
  if (b < a) {
    t = b;
    b = a;
    a = t;
  }
  //把Ａ換成最小，再把Ｂ換成次小，Ａ就是最小
  if (b < a) {
    t = a;
    a = b;
    b = t;
  }
  if (c < a) {
    t = a;
    a = c;
    c = t;
  }
  if (c < b) {
    t = b;
    b = c;
    c = t;
  }
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