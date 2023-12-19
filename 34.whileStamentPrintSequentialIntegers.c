#include <stdio.h>

int main() {
  int input;
  int count = 1;

  printf("Please enter the number: ");
  if (scanf("%d", &input) == 1) {
    if (input != 0) {
      while (count <= input) {
        printf("%d\n", count);
        count = count + 1;
      }
    } else {
      printf("Please enter a valid integer (not 0)!\n");
    }
  } else {
    printf("Please enter a valid integer!\n");
  }

  return 0;
}
