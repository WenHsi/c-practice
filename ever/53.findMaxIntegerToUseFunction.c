#include <stdio.h>
int max2(int, int);

int main() {
  int a, b;
  printf("Please enter the first integer: ");
  scanf("%d", &a);
  printf("Please enter the second integer: ");
  scanf("%d", &b);
  printf("Max = %d\n", max2(a, b));
  return 0;
}

// int main() {
//   int a, b;
//   printf("Please enter the first integer: ");
//   scanf("%d", &a);
//   printf("Please enter the second integer: ");
//   scanf("%d", &b);
//   printf("Max = %d\n", max2(7, 5));
//   printf("Max = %d\n", max2(2412, 10));
//   printf("Max = %d\n", max2(1014, 242));
//   printf("Max = %d\n", max2(6, 52));
//   printf("Max = %d\n", max2(444, 421));
//   return 0;
// }

int max2(int integer1, int integer2) {
  if (integer1 >= integer2) {
    return integer1;
  } else {
    return integer2;
  }
}