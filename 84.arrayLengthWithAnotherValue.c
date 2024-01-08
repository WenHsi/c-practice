#include <stdio.h>
int max(int[], int);

int main() {
  int a[3] = {7, 5, 9};
  int b[5] = {5, 1, 0, 2, 7};
  printf("Max: %d\n", max(b, 5));

  return 0;
}

int max(int v[], int N) {
  int max = v[0];
  for (int i = 1; i < N; i++) {
    if (v[i] > max) {
      max = v[i];
    }
  }
  return max;
}