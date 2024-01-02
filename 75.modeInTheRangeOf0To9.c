#include <stdio.h>

int main() {
  int i, n, b[10] = {0};
  printf("Please enter ten integer:");
  for (i = 1; i <= 10; i++) {
    scanf("%d", &n);
    while (n >= 10 || n <= 0) {
      printf("Please enter a valid value within the range of 0 to 9: ");
      scanf("%d", &n);
    };
    b[n]++;
  }

  int max_i = 0;
  for (i = 1; i < 10; i++) {
    if (b[i] >= b[max_i]) {
      max_i = i;
    }
  }
  printf("Ans: %d\n", max_i);
  return 0;
}