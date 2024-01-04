#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(0));
  int i, n[10];

  for (i = 1; i <= 10; i++) {
    n[i - 1] = i;
  }

  for (i = 1; i <= 10; i++) {
    int r = rand() % (11 - i) + i;
    int temp = n[i - 1];
    n[i - 1] = n[r - 1];
    n[r - 1] = temp;
    printf("%d ", n[i - 1]);
  }
  printf("\n");
  return 0;
}