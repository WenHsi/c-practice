#include <stdio.h>

int main() {
  // 測試定義兩種不同類型的字串。
  char strA[] = "AAAAA";
  char *strB = "BBBBB";

  char *strC = strA;
  // 使用指標，能對陣列字串或字串字面常數，重新附值。
  strB = "AAA";
  // 單純的字面常數是唯讀，我的理解是沒給它初始化索引，所以無法用此方式。
  // strB[0] = 'C';  // 此行已被註解，因為這樣的操作是不正確的。

  printf("%s\n", strB);
  return 0;
}
