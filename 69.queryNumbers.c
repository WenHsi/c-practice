#include <stdio.h>

int main() {
  //想法是i作為順序編號，不是陣列索引編號
  int i, numbers[5] = {0};
  int sizeOfNumbers = sizeof(numbers) / sizeof(numbers[0]);

  for (i = 1; i <= 5; i++) {
    printf("%d: ", i);
    scanf("%d", &numbers[i - 1]);
  }
  while (1) {
    printf("Q: ");
    scanf("%d", &i);
    if (i == 0 || i > sizeOfNumbers) {
      break;
    }
    printf("%d\n", numbers[i - 1]);
  }
  return 0;
}