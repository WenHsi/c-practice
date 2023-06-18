#include <stdio.h>
int main() {
  int answer = 3;
  int guess;
  int count = 0;
  while (count == 0 || guess != answer) {
    printf("Please enter your guess: ");
    scanf("%d", &guess);
    count = count + 1;
    if (guess > answer) {
      printf("Too large!\n");
    } else if (guess < answer) {
      printf("Too small!\n");
    } else {
      printf("Correct! (%d)\n", count);
    }
  }
  return 0;
}