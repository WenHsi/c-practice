#include <stdio.h>

int main() {
  int total = 0, id;
  printf("Please enter an ID from 1 to 5:\n");

  do {
    scanf("%d", &id);
    switch (id) {
    case 0:
      break;
    case 1:
      printf("紅茶20元\n");
      total += 20;
      break;
    case 2:
      printf("綠茶20元\n");
      total += 20;
      break;
    case 3:
      printf("冬瓜茶25元\n");
      total += 25;
      break;
    case 4:
      printf("奶茶35元\n");
      total += 35;
      break;
    case 5:
      printf("珍奶50元\n");
      total += 50;
      break;
    default:
      printf("Please enter valid value!\n");
    }
  } while (id != 0);

  printf("總金額: %d元\n", total);
  printf("作業難度評分: %d / 10 \n", 2);
  return 0;
}