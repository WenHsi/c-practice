#include <stdio.h>

int main(void) {
  char input, output;
  printf("請輸入一個大寫的英文字母：");
  scanf(" %c", &input);
  output = input + ('a' - 'A'); // 32
  printf("%c\n", output);
  return 0;
}