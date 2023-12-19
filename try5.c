#include <stdio.h>

int main() {
  char date[10];
  int year, month, day;
  int language;

  printf("Please enter a date in the format (yyyy/mm/dd):");
  scanf("%s", date);

  printf("Please enter a number (1 : Chinese; 2 : English):");
  scanf("%d", &language);

  sscanf(date, "%d/%d/%d", &year, &month, &day);

  if (language == 1) {
    printf("%d年%d月%d日\n", year, month, day);
  } else if (language == 2) {

    switch (day) {
    case 1:
      printf("1st");
      break;
    case 2:
      printf("2nd");
      break;
    case 3:
      printf("3rd");
      break;
    default:
      printf("%dth", month);
    }

    switch (month) {
    case 1:
      printf(" %s,", "Jan");
      break;
    case 2:
      printf(" %s,", "Feb");
      break;
    case 3:
      printf(" %s,", "Mar");
      break;
    case 4:
      printf(" %s,", "Apr");
      break;
    case 5:
      printf(" %s,", "May");
      break;
    case 6:
      printf(" %s,", "Jun");
      break;
    case 7:
      printf(" %s,", "Jul");
      break;
    case 8:
      printf(" %s,", "Aug");
      break;
    case 9:
      printf(" %s,", "Sep");
      break;
    case 10:
      printf(" %s,", "Oct");
      break;
    case 11:
      printf(" %s,", "Nov");
      break;
    case 12:
      printf(" %s,", "Dec");
      break;
    }
    printf(" %d\n", year);
  } else {
    printf("輸入有誤！\n");
  }
  printf("作業難度評分: %d / 10\n", 10);
  return 0;
}