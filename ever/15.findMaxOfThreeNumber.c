#include <stdio.h>
int main() {
  int num1, num2, num3, max;
  printf("Please enter the first integer: ");
  scanf("%d", &num1);
  printf("Please enter the second integer: ");
  scanf("%d", &num2);
  printf("Please enter the third integer: ");
  scanf("%d", &num3);
  max = num1;
  if (max < num2) {
    max = num2;
  };
  if (max < num3) {
    max = 3;
  };
  /*
    複雜的寫法
    if (num1 >= num2 && num1 >= num3) {
      max = num1;
    }
    if (num2 > num1 && num2 > num3) {
      max = num2;
    }
    if (num3 > num1 && num3 > num2) {
      max = num3;
    }
  */
  printf("The maxinum is %d\n", max);
  return 0;
}