#include <stdio.h>

// int main() {
//   int N;
//   printf("Please enter the integer to show the * rectangle: ");
//   scanf("%d", &N);

//   if (N > 2) {
//     for (int i = 1; i <= N; ++i) {
//       printf("*");
//     }
//     printf("\n");

//     for (int i = 1; i <= N - 2; ++i) {
//       printf("*");
//       for (int j = 1; j <= N - 2; ++j) {
//         printf(" ");
//       }
//       printf("*");
//       printf("\n");
//     }

//     for (int i = 1; i <= N; ++i) {
//       printf("*");
//     }
//     printf("\n");

//   } else {
//     for (int i = 1; i <= N; ++i) {
//       for (int j = 1; j <= N; ++j) {
//         printf("*");
//       }
//       printf("\n");
//     }
//   }
//   return 0;
// }

int main() {
  int N;
  printf("Please enter the integer to show the * rectangle: ");
  scanf("%d", &N);

  for (int i = 1; i <= N; ++i) {
    for (int j = 1; j <= N; ++j) {
      if (i == 1 || i == N || j == 1 || j == N) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}