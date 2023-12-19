#include <stdio.h>
int main() {
  int input;
  int sum = 0;
  int count = 0;
  float average;
  printf("Please enter the numbers to the average. Until enter 0. (0: quit): ");
  scanf("%d", &input);
  while (input != 0) {
    sum = sum + input;
    count = count + 1;
    scanf("%d", &input);
  }
  if (sum == 0) {
    printf("The average is N/A\n");
  } else {
    average = (float)sum / count;
    printf("The average is %f\n", average);
  }
  return 0;
}