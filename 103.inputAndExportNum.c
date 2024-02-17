#include <stdio.h>
#include <stdlib.h>

int main() {
  int *n = 0;
  int length = 0;
  while (1) {
    int input;
    scanf("%d", &input);
    if (input == 0)
      break;
    int *larger = malloc(sizeof(int) * (length + 1));
    for (int i = 0; i < length; i++) {
      larger[i] = n[i];
    }
    free(n);
    n = larger;
    n = realloc(n, sizeof(int) * (length + 1));
    n[length] = input;
    length++;
  }

  for (int i = 0; i < length; i++) {
    printf("%d ", n[i]);
  }
  printf("\n");

  return 0;
}