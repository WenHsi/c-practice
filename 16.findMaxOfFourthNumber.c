#include <stdio.h>
int main() {
  int a, b, c, d, max;
  printf("Please enter four intergers: ");
  scanf("%d%d%d%d", &a, &b, &c, &d);
  max = a;
  if (b > max) {
    max = b;
  }
  if (c > max) {
    max = c;
  }
  if (d > max) {
    max = d;
  }
  printf("The Maxinum is %d.\n", max);
  return 0;
}

// v2:
// int main() {
//   int a, b, c, d, max;
//   printf("Please enter four intergers: ");
//   scanf("%d%d%d%d", &a, &b, &c, &d);
//   max = a;
//   if (b > a && b >= c && b >= d) {
//     max = b;
//   }
//   if (c > a && c > b && c >= d) {
//     max = c;
//   }
//   if (d > a && d > b && d > c) {
//     max = d;
//   }
//   printf("The Maxinum is %d.\n", max);
//   return 0;
// }

// v1:
// int main() {
//   int a, b, c, d, max;
//   printf("Please enter four intergers: ");
//   scanf("%d%d%d%d", &a, &b, &c, &d);
//   if (a >= b && a >= c && a >= d) {
//     max = a;
//   }
//   if (b > a && b >= c && b >= d) {
//     max = b;
//   }
//   if (c > a && c > b && c >= d) {
//     max = c;
//   }
//   if (d > a && d > b && d > c) {
//     max = d;
//   }
//   printf("The Maxinum is %d.\n", max);
//   return 0;
// }