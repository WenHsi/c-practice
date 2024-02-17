#include <stdio.h>
#include <stdlib.h>

int main() {
  int *numbers = 0;
  int length = 0;
  while (1) {
    int input;
    scanf("%d", &input);
    if (input == 0) {
      break;
    }
    // int *larger = malloc(sizeof(int) * (length + 1));
    // printf("%p ", larger);
    // for (int i = 0; i < length; i++) {
    //   larger[i] = numbers[i];
    // }
    // larger[length] = input;
    // free(numbers);
    int *larger = realloc(numbers, sizeof(int) * (length + 1));
    numbers = larger;
    length++;
  }

  for (int i = 0; i < length; i++) {
    printf("%d ", numbers[i]);
  }
  printf("\n");

  return 0;
}