#include <stdio.h>

int main() {
  printf("Please enter your grade: ");
  int grade; 
  scanf("%d", &grade);
  if (grade >= 60) {
    printf("Pass\n");
  } else {
    printf("Fail\n");
  }
  return 0;
}