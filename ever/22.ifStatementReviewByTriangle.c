#include <stdio.h>
int main() {
  printf("Please enter the lengths: ");
  int side1, side2, side3, temp;
  scanf("%d%d%d", &side1, &side2, &side3);
  printf("Before: %d %d %d\n", side1, side2, side3);
  if (side2 < side1) {
    temp = side1;
    side1 = side2;
    side2 = temp;
  }
  if (side3 < side1) {
    temp = side1;
    side1 = side3;
    side3 = temp;
  }
  if (side3 < side2) {
    temp = side2;
    side2 = side3;
    side3 = temp;
  }
  printf("After: %d %d %d\n", side1, side2, side3);

  if (side1 == side3) {
    printf("This is regular triangle.\n");
  }
  if (side1 == side2) {
    printf("This is isosceles triangle.\n");
  }
  if (side1 * side1 + side2 * side2 == side3 * side3) {
    printf("This is rectangular triangle.\n");
  }
  return 0;
}
