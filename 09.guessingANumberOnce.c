#include <stdio.h>
int main() {
  int answer = 9;
  int guess;
  printf("請輸入一個數字：");
  scanf("%d", &guess);
  if (guess > answer) {
    printf("請輸入小一點的數字\n");
  }
  if (guess < answer) {
    printf("請輸入大一點的數字\n");
  }
  if (guess == answer) {
    printf("猜對了！\n");
  }
  return 0;
}