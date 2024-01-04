#include <stdio.h>

// int main() {
//   int N;
//   printf("Please enter the integer to show the * triangle: ");
//   scanf("%d", &N);
//   for (int i = 1; i <= N; ++i) {
//     for (int j = 1; j <= i; ++j) {
//       printf("*");
//     }
//     printf("\n");
//   }
//   return 0;
// }

// int main() {
//   int N;
//   printf("Please enter the integer to show the * triangle: ");
//   scanf("%d", &N);

//   for (int i = 1; i <= N; ++i) {
//     for (int j = 1; j <= i; ++j) {
//       if (j == 1 || i == j || i == N) {
//         printf("*");
//       } else {
//         printf(" ");
//       }
//     }
//     printf("\n");
//   }
//   return 0;
// }

int main() {
  int N;
  printf("Please enter the integer to show the * triangle: ");
  scanf("%d", &N);

  if (N <= 3) {
    for (int i = 1; i <= N; ++i) {
      for (int j = 1; j <= i; ++j) {

        printf("*");
      }
      printf("\n");
    }

  } else {
    for (int i = 1; i <= 1; ++i) {
      printf("*\n");
    }
    for (int i = 0; i < N - 2; ++i) {
      printf("*");
      for (int j = 1; j <= i; ++j) {
        printf(" ");
      }
      printf("*\n");
    }
    for (int i = 1; i <= N; ++i) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}