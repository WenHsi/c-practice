#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(0));
  int N;
  int counter[11] = {0};
  printf("N = ");
  scanf("%d", &N);

  for (int i = 1; i <= N; i++) {
    int dice1 = rand() % 6 + 1;
    int dice2 = rand() % 6 + 1;
    int sum = dice1 + dice2;
    counter[sum - 2]++;
  }

  for (int i = 2; i <= 12; i++) {
    printf("%d: %d\n", i, counter[i - 2]);
  }
  return 0;
}
