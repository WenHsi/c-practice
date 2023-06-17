#include <stdio.h>
#include <stdlib.h>
int main() {
  int a, b;
  char op;
  float answer;
  printf("Please enter two integers by + - * /, such as: 3+5:\n");
  scanf("%d%c%d", &a, &op, &b);
  switch (op) {
  case '+':
    answer = a + b;
    break;
  case '-':
    answer = a - b;
    break;
  case '*':
    answer = a * b;
    break;
  case '/':
    answer = (float)a / b;
    break;
  default:
    printf("Please enter valid values!\n");
    exit(1);
  }
  printf("ANS: %f\n", answer);
  return 0;
}