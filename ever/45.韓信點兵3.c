#include <stdio.h>

int main() {
  int number;
  int count = 0;
  for (number = 1; number < 100000 && count < 10; ++number) {
    if (number % 3 == 2 && number % 5 == 3 && number % 7 == 2) {
      ++count;
      if (count == 1) {
        printf("%d\n", number);
      }
    }
  }
  return 0;
}