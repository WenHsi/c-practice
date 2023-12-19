#include <stdio.h>

int main() {
  int year, month, day;
  int language;

  printf("Please enter a date in the format (yyyy/mm/dd):");
  scanf("%d/%d/%d", &year, &month, &day);

  printf("Please enter a number (1 : Chinese; 2 : English):");
  scanf("%d", &language);

  if (language == 1) {

    printf("%d年%d月%d日\n", year, month, day);

  } else if (language == 2) {

    switch (day) {
    case 1:
      printf("1st");
      break;
    case 11:
      printf("11st");
      break;
    case 21:
      printf("21st");
      break;
    case 2:
      printf("2nd");
      break;
    case 12:
      printf("12nd");
      break;
    case 22:
      printf("22nd");
      break;
    case 3:
      printf("3rd");
      break;
    case 13:
      printf("13rd");
      break;
    case 23:
      printf("23rd");
      break;
    default:
      printf("%dth", day);
    }
    switch (month) {
    case 1:
      printf(" Jan,");
      break;
    case 2:
      printf(" Feb,");
      break;
    case 3:
      printf(" Mar,");
      break;
    case 4:
      printf(" Apr,");
      break;
    case 5:
      printf(" May,");
      break;
    case 6:
      printf(" Jun,");
      break;
    case 7:
      printf(" Jul,");
      break;
    case 8:
      printf(" Aug,");
      break;
    case 9:
      printf(" Sep,");
      break;
    case 10:
      printf(" Oct,");
      break;
    case 11:
      printf(" Nov,");
      break;
    case 12:
      printf(" Dec,");
      break;
    }
    printf(" %d\n", year);
  } else {
    printf("輸入有誤！\n");
    return 1;
  }
  return 0;
}