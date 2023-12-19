#include <stdio.h>

int main() {
  int num1, num2;
  char op;
  float answer;
  printf("Please enter a operation (+, -, *, /) along with the numbers (e.g., "
         "3+3): ");
  scanf("%d%c%d", &num1, &op, &num2);
  if (op == '+') {
    answer = num1 + num2;
  } else if (op == '-') {
    answer = num1 - num2;
  } else if (op == '*') {
    answer = num1 * num2;
  } else if (op == '/') {
    // 避免被除以0
    if (num2 != 0) {
      // int整數除法後，小數會被忽略，需要轉型為float浮點數，再進行運算
      answer = (float)num1 / num2;
    } else {
      printf("輸入有誤!!\n");
      return 1;
    }
  } else {
    printf("輸入有誤!!\n");
    return 1;
  }

  printf("ANS: %f\n", answer);
  printf("作業難度評分: %d / 10 \n", 5);
  return 0;
}