#include <stdio.h>

int main() {
  int num1, num2, max;
  printf("Please enter the first integer: ");
  scanf("%d", &num1);
  printf("Please enter the second integer: ");
  scanf("%d", &num2);
  if (num1 > num2) {
    max = num1;
  } else {
    max = num2;
  }
  /*
    我喜歡第二種做法，看起來比較厲害？！
      max = num1;
      if (max < num2) {
        max = num2;
      }
  */
  printf("The maxinum is %d\n", max);
  return 0;
}