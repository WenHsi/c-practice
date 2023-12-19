#include <stdio.h>

// int main() {
//   int max;
//   printf("Please enter the number up to which you want to print odd numbers
//   (1 "
//          "to N): ");
//   scanf("%d", &max);
//   for (int count = 1; count <= max; count++) {
//     int number = 2 * count - 1;

//     printf("%d\n", number);
//   }
//   return 0;
// }

int main() {
  int max;
  printf("Please enter the number up to which you want to print odd numbers (1 "
         "to N): ");
  scanf("%d", &max);
  for (int count = 1; count <= max; count++) {
    if (count % 3 != 0 && count % 2 == 0) {
      printf("%d\n", count);
    }
  }
  return 0;
}