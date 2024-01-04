#include <stdio.h>

// int main() {
//   for (int i = 2; i < 10; ++i) {
//     for (int j = 1; j < 10; ++j) {
//       printf("%d x %d = %d\n", i, j, i * j);
//     }
//   }
//   return 0;
// }

int main() {
  int i = 2, j = 1;
  for (int c = 1; c <= 72; ++c) {
    printf("%d x %d = %d\n", i, j, i * j);
    ++j;
    if (j == 10) {
      j = 1;
      ++i;
    }
  }
  return 0;
}