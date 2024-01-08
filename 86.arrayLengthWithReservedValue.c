#include <stdio.h>
int length(int[]);

int main() {
  //用-1來設定為保留值。
  int v[] = {4, 8, 9, -1};
  printf("%d\n", length(v));
  return 0;
}

int length(int v[]) {
  //遇到-1陣列結束，回傳length。
  int i = 0;
  while (v[i] != -1) {
    i++;
  }
  return i;
}