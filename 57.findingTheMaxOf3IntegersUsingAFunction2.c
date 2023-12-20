#include <stdio.h>
int max2(int, int);
int max3(int, int, int);

int main() {
  int a, b, c;
  printf("Please enter three integers: ");
  scanf("%d %d %d", &a, &b, &c);
  printf("The maxinum is %d\n", max3(a, b, c));
  return 0;
}

int max3(int integer1, int integer2, int integer3) {
  return max2(max2(integer1, integer2), integer3);
}

int max2(int integer1, int integer2) {
  if (integer1 >= integer2) {
    return integer1;
  } else {
    return integer2;
  }
}