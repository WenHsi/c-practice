#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void random10(void);
int randomTimes(void);
void averageTimes(int);

int main() {
  srand(time(0));
  int N;
  random10();
  printf("Please enter the integer to indicate the average number of times: ");
  scanf("%d", &N);
  averageTimes(N);
  return 0;
}

void random10(void) {
  int i, j, n[10];
  int times = 0;
  for (i = 1; i <= 10; i++) {
    do {
      n[i - 1] = rand() % 10 + 1;
      times++;
      for (j = 1; j < i; j++) {
        if (n[i - 1] == n[j - 1]) {
          break;
        }
      }
    } while (j != i);
    printf("%d ", n[i - 1]);
  }
  printf("\n");
}

int randomTimes() {
  int i, j, n[10];
  int times = 0;
  for (i = 1; i <= 10; i++) {
    do {
      n[i - 1] = rand() % 10 + 1;
      times++;
      for (j = 1; j < i; j++) {
        if (n[i - 1] == n[j - 1]) {
          break;
        }
      }
    } while (j != i);
  }
  return times;
}

void averageTimes(int n) {
  int i;
  int counter[16] = {0};
  for (i = 1; i <= 16; i++) {
    counter[((randomTimes() - 1) / 10)]++;
  }

  for (i = 1; i <= 16; i++) {
    printf("%3d ~%3d: %d\n", (i - 1) * 10 + 1, i * 10, counter[i - 1]);
  }
}