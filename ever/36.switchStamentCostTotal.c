#include <stdio.h>

int main() {
  int id;
  int total = 0;
  printf("Please enter the item number to add to the total cost.\n");
  do {
    scanf("%d", &id);
    switch (id) {
    case 0:
      printf("Total: %d\n", total);
      break;
    case 1:
      total += 90;
      break;
    case 2:
      total += 75;
      break;
    case 3:
      total += 83;
      break;
    case 4:
      total += 89;
      break;
    case 5:
      total += 71;
      break;
    default:
      printf("Please enter a valid number (1-5) for the item number.\n");
    }
  } while (id != 0);
  return 0;
}