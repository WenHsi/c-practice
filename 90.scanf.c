#include <stdio.h>

int main() {
  int n;
  while (scanf("%d", &n) != 1) {
    printf("Error: Invalid input\n");
    setbuf(stdin, NULL);
  }
  printf("%d\n", n);
  return 0;
}