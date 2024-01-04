#include <stdio.h>
int max3(int, int, int);

int main() {
  int a, b, c;
  printf("Please enter three integers: ");
  scanf("%d %d %d", &a, &b, &c);
  printf("The maxinum is %d\n", max3(a, b, c));
  return 0;
}

int max3(int integer1, int integer2, int integer3) {
  int max = integer1;
  if (integer2 > max) {
    max = integer2;
  }

  if (integer3 > max) {
    max = integer3;
  }
  return max;
}