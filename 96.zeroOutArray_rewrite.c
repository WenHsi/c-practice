#include <stdio.h>
void printArr(int *);
void zeroOutArr(int *);

int main() {
  int v[5] = {1, 3, 5, 7, 10};
  int *n = v;
  printArr(v);
  zeroOutArr(v);
  printArr(v);
  return 0;
}

void printArr(int *v) {
  int *n;
  for (n = v; n != v + 5; n++) {
    printf("%d\n", *n);
  }
}

void zeroOutArr(int *v) {
  int *n = v;
  while (n != v + 5) {
    *n++ = 0;
  }
}