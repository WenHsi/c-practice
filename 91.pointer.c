#include <stdio.h>

int main() {
  int n = 5;
  int v[5];
  int *nAddr = &n;
  int **nAddr2 = &nAddr;
  int ans = *nAddr;
  printf("%p\n", &n);
  printf("%p\n", &ans);
  printf("%p\n", &nAddr2);
  nAddr = v;
  printf("%d\n", n);
  ans = *nAddr;
  *nAddr2 = &ans;
  printf("%p\n", &n);
  printf("%d\n", **nAddr2);
  printf("%p\n", &ans);
  return 0;
}