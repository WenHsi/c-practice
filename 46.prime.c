#include <stdio.h>

// int main() {
//   int N;
//   printf("Please enter the integer to check prime: ");
//   scanf("%d", &N);

//   if (N <= 1) {
//     printf("No\n");
//     return 1;
//   }

//   for (int i = 2; i < N; ++i) {
//     if (N % i == 0) {
//       printf("No\n");
//       return 1;
//     }
//   }
//   printf("Yes\n");
//   return 0;
// }

int main() {
  int N;
  printf("Please enter the integer to check prime: ");
  scanf("%d", &N);

  int number;
  for (number = 2; number < N && N % number != 0; ++number)
    ;

  if (number == N) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }
  return 0;
}