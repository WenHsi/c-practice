#include <stdio.h>
#include <stdlib.h>
int main() {
  int a, b;
  char op;
  float answer;
  printf("Please enter two integers by + - * /, such as: 3+5:\n");
  scanf("%d%c%d", &a, &op, &b);
  if (op == '+') {
    answer = a + b;
  } else if (op == '-') {
    answer = a - b;
  } else if (op == '*') {
    answer = a * b;
  } else if (op == '/') {
    answer = (float)a / b;
  } else {
    printf("Please enter valid values!\n");
    exit(1);
  }
  printf("ANS: %.10f\n", answer);
  return 0;
}