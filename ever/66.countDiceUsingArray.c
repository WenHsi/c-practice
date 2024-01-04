#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(0));
  int N;
  int counter[6] = {};

  printf("N = ");
  scanf("%d", &N);

  for (int i = 1; i <= N; ++i) {
    int nowDice;
    nowDice = rand() % 6 + 1;
    counter[nowDice - 1]++;
  }
  for (int j = 1; j <= 6; ++j) {
    printf("%d: %d\n", j, counter[j - 1]);
  }
  return 0;
}