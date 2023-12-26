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
    switch (nowDice) {
    case 1:
      ++counter[0];
      break;
    case 2:
      ++counter[1];
      break;
    case 3:
      ++counter[2];
      break;
    case 4:
      ++counter[3];
      break;
    case 5:
      ++counter[4];
      break;
    case 6:
      ++counter[5];
    }
  }
  for (int i = 0; i < 6; ++i) {
    printf("%d: %d\n", i + 1, counter[i]);
  }
  return 0;
}