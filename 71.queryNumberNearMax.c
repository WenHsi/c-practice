#include <stdio.h>

int main() {
  int numbers[10];
  int i;
  int findNumber;

  printf("Please enter the ten integer:\n");
  for (i = 1; i <= 10; i++) {
    scanf("%d", &numbers[i - 1]);
  }
  while (1) {
    printf("Q: ");
    scanf("%d", &findNumber);
    if (findNumber == 0) {
      break;
    }
    int max_i = -1;
    for (i = 0; i < 10; i++) {
      if (numbers[i] <= findNumber &&
          (max_i == -1 || numbers[i] > numbers[max_i])) {
        max_i = i;
      }
    }
    if (max_i != -1) {
      printf("%d\n", numbers[max_i]);
    }
  }
  return 0;
}