#include <stdio.h>

int main() {
  printf("Please enter the lengths: ");
  int side1, side2, side3;
  scanf("%d%d%d", &side1, &side2, &side3);
  if (side1 == side2 || side2 == side3 || side1 == side3) {
    printf("Isosceles triangle\n");
  }
  return 0;
}