#include <stdio.h>
int main() {
  int a, b, c, temp;
  printf("Please enter the first integer: ");
  scanf("%d", &a);
  printf("Please enter the second integer: ");
  scanf("%d", &b);
  printf("Please enter the thrid integer: ");
  scanf("%d", &c);
  if (a > b) {
    temp = a;
    a = b;
    b = temp;
  }
  if (b > c) {
    temp = b;
    b = c;
    c = temp;
  }
  if (a > b) {
    temp = a;
    a = b;
    b = temp;
  }
  printf("%d %d %d\n", a, b, c);
  printf("作業難度評分: %d / 10 \n", 7);
  return 0;
}