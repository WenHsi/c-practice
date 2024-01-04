#include <stdio.h>

int main() {
  int n[10], q, i;
  printf("Please enter the integer:\n");
  for (i = 1; i <= 10; i++) {
    scanf("%d", &n[i - 1]);
  }

  while (1) {
    printf("Q: ");
    scanf("%d", &q);
    if (q == 0) {
      break;
    }

    int min_i = -1;
    for (i = 0; i < 10; i++) {
      if (n[i] <= q && (min_i == -1 || n[i] > n[min_i])) {
        min_i = i;
      }
    }
    if (min_i == -1) {
      for (i = 0; i < 10; i++) {
        if (min_i == -1 || n[min_i] > n[i]) {
          min_i = i;
        }
      }
    }
    printf("min: %d index: %d\n", n[min_i], i);

    int max_i = -1;
    for (i = 0; i < 10; i++) {
      if (n[i] >= q && (max_i == -1 || n[i] < n[max_i])) {
        max_i = i;
      }
    }
    if (max_i == -1) {
      for (i = 0; i < 10; i++) {
        if (max_i == -1 || n[max_i] < n[i]) {
          max_i = i;
        }
      }
    }
    printf("max: %d index: %d\n", n[max_i], i);

    if (q - n[min_i] < n[max_i] - q) {
      printf("%d\n", n[min_i]);
    } else {
      printf("%d\n", n[max_i]);
    }
  }
  return 0;
}