#include <stdio.h>
void f(int[]);

int main() {
  int v[3] = {1, 2, 3};
  //錯誤
  // f(v);
  printf("Size of int: %zu\n", sizeof(int));
  printf("Size of v[0]: %zu\n", sizeof(v[0]));
  printf("Size of v: %zu\n", sizeof(v));
  printf("Length of v: %zu\n", sizeof(v) / sizeof(v[0]));
  return 0;
}

// void f(int v[]) {
//   // v[]不是陣列，是指標。
//   printf("Size of int: %zu\n", sizeof(int));
//   printf("Size of v[0]: %zu\n", sizeof(v[0]));
//   printf("Size of v: %zu\n", sizeof(v));
//   printf("Length of v: %zu\n", sizeof(v) / sizeof(v[0]));
// }