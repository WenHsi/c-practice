#include <stdio.h>

int main() {
  int i, less, large, numbers[10];
  int sizeOfNumbers = sizeof(numbers) / sizeof(numbers[0]);

  printf("Please enter 10 integers, each followed by pressing \"enter\":\n");
  for (i = 1; i <= sizeOfNumbers; i++) {
    scanf("%d", &numbers[i - 1]);
  }

  while (1) {
    printf("Please enter the two integers to show the range of numbers: ");
    scanf("%d %d", &less, &large);
    if (less == 0 && large == 0) {
      break;
    }

    for (i = 0; i <= sizeOfNumbers - 1; i++) {

      if (numbers[i] >= less && numbers[i] <= large) {
        printf("%d ", numbers[i]);
      }
    }
    printf("\n");
  }
  
  return 0;
}