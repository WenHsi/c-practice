#include <stdio.h>

int main() {
  int count;
  int cost = 300;
  printf("請輸入用餐人數： ");
  scanf("%d", &count);
  int total = cost * count;
  if (total >= 3000) {
    total = total * 0.8;
    printf("總金額為（已打8折）：%d\n", total);
  } else {
    // total = total;
    printf("總金額為：%d\n ", total);
  }
  return 0;
}