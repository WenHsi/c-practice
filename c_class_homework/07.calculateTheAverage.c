#include <stdio.h>

int main() {
  int input;
  int sum = 0, count = 0;
  double average;
  printf(
      "Please enter several integers to calculate the average (0: quit): \n");
  scanf("%d", &input);
  if (!input) {
    return 0;
  }

  while (input != 0) {
    sum = sum + input;
    ++count;
    scanf("%d", &input);
  }
  average = (float)sum / count;
  printf("The average is %f\n", average);
  return 0;
}