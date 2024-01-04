#include <stdio.h>
int abs(int);

int main() {
  int i, n[10];
  printf("Please enter ten integers: ");
  for (i = 1; i <= 10; i++) {
    scanf("%d", &n[i - 1]);
  }
  while (1) {
    int q;
    printf("Q: ");
    scanf("%d", &q);
    if (q == 0) {
      break;
    }
    int nearest_n = n[0];
    int nearest_d = abs(q - nearest_n);
    for (i = 1; i < 10; i++) {
      int d = abs(q - n[i]);
      if (d < nearest_d || d == nearest_d && n[i] < nearest_n) {
        nearest_d = d;
        nearest_n = n[i];
        printf("in %d\n", nearest_n);
      }
    }
    printf("N = %d\n", nearest_n);
  }
  return 0;
}

int abs(int n) {
  if (n < 0) {
    return n * -1;
  }
}