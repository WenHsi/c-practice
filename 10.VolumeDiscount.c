#include <stdio.h>

int main() {
  int count;
  int cost = 300;
  printf("請輸入用餐人數： ");
  scanf("%d", &count);
  int total = cost * count;
  if (total >= 3000) {
    double sale = total * 0.8;
    int saleTypeToInt = sale;
    printf("總金額為（已打8折）：%d\n", saleTypeToInt);
  } else {
    printf("總金額為： %d\n", total);
  }
  return 0;
}