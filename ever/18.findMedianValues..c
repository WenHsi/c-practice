#include <stdio.h>
int main() {
  printf("Please enter three integers: ");
  int a, b, c, med;
  scanf("%d%d%d", &a, &b, &c);
  med = a;
  if (a < b && b < c) {
    med = b;
  }
  if (a < c && c < b) {
    med = c;
  }
  printf("The median is: %d.\n", med);
  return 0;
}