#include <stdio.h>

int main() {
  int id;
  int prices[5] = {90, 75, 83, 89, 71};
  int size_of_prices = sizeof(prices) / sizeof(prices[0]);
  int total = 0;

  while (1) {
    printf("Please enter the item number(1-%d) to calculate the total price: ",
           size_of_prices);
    scanf("%d", &id);
    if (id <= 0 || id > size_of_prices) {
      break;
    }
    total = total + prices[id - 1];
  }

  printf("Total: %d\n", total);
  return 0;
}