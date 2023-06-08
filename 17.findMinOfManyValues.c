#include <stdio.h>
int main() {
  int a, b, c, min;
  printf("Please enter three intergers: ");
  scanf("%d%d%d", &a, &b, &c);
  min = a;
  if (b < min) {
    min = b;
  }
  if (c < min) {
    min = c;
  }
  printf("The mininum is: %d.\n", min);
  return 0;
}