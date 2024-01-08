#include <stdio.h>
int str_print(char[]);

int main() {
  // str1跟str2相等，結尾都會加上\0，只是寫法不同。
  char str1[] = {'H', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '\0'};
  char str2[] = "Hello world";
  int length = str_print(str1);

  printf("%s\n", str2);
  return 0;
}

int str_print(char str[]) {
  int length = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    printf("%c", str[i]);
    length++;
  }
  printf("\n");
  return length;
}