#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(0));
  int answer = rand() % 99 + 1;
  int guess;

  do {
    printf("Please enter your guess: ");
    scanf("%d", &guess);
    if (guess > answer) {
      printf("Too large!\n");
    } else if (guess < answer) {
      printf("Too small!\n");
    } else {
      printf("Correct!\n");
    }
  } while (guess != answer);
  return 0;
}