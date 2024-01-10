#include <stdio.h>

int main() {
  int n;
  while (1) {
    if (scanf("%d", &n) == 1) {
      printf("%d\n", n);
      break;
    } else {
      printf("Error: Invalid input\n");
      while ((n = getchar()) != '\n') {
        printf("Read character: %c\n", n);
      };
    }
  }
  return 0;
}