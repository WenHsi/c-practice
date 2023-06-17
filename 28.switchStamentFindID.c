#include <stdio.h>
int main() {
  int id;
  printf("Please inter your want ID: ");
  scanf("%d", &id);
  switch (id) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    printf("Kewen\n");
    break;
  case 7:
    printf("Make\n");
    break;
  case 8:
  case 9:
    printf("Kevin Wen\n");
  case 10:
    printf("WoW\n");
    break;
  default:
    printf("Not found!\n");
  }
  return 0;
}
