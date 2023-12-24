#include <stdio.h>

int main() {
  int side1, side2, side3;
  printf("Please enter the first integer: ");
  scanf("%d", &side1);
  printf("Please enter the second integer: ");
  scanf("%d", &side2);
  printf("Please enter the third integer: ");
  scanf("%d", &side3);
  if (side1 == side2 && side2 == side3) {
    printf("Regular triangle\n");
  }
  if (side1 == side2 || side1 == side3 || side2 == side3) {
    printf("Isosceles triangle\n");
  }
  if (side1 * side1 + side2 * side2 == side3 * side3 ||
      side1 * side1 + side3 * side3 == side2 * side2 ||
      side2 * side2 + side3 * side3 == side1 * side1) {
    printf("Rectangular triangle\n");
  }

  printf("作業難度評分: %d / 10 \n", 4);
  return 0;
}