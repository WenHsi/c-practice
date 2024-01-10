#include <stdio.h>
void addone(int *);

int main() {
  int n = 5;
  addone(&n);
  printf("%d\n", n);
  return 0;
}

void addone(int *n) {
  //   *n = *n + 1;
  (*n)++;
}