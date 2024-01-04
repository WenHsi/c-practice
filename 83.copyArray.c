#include <stdio.h>
void arrayCopy(void);
void changeArrayValues(int n[10]);

int main() {
  //陣列複製練習。
  arrayCopy();

  //產生陣列值1~10。
  int i;
  int arr[10];
  for (i = 0; i < 10; i++) {
    printf("%2d ", arr[i] = i);
  }
  printf("\n");

  //用剛剛產生的陣列傳遞，讓arrayAdd1更改值，再打印出來。證明陣列的值會直接被修改。
  changeArrayValues(arr);
  for (i = 0; i < 10; i++) {
    printf("%2d ", arr[i]);
  }
  printf("\n");

  return 0;
}

void changeArrayValues(int n[10]) {
  int i;
  for (i = 0; i < 10; i++) {
    n[i]++;
  }
}

void arrayCopy(void) {
  int i, n[10], v[10];
  for (i = 1; i <= 10; i++) {
    n[i - 1] = i;
  }

  for (i = 0; i < 10; i++) {
    v[i] = n[i];
  }

  for (i = 0; i < 10; i++) {
    printf("%d ", n[i]);
  }
  printf("\n");

  for (i = 0; i < 10; i++) {
    printf("%d ", v[i]);
  }

  printf("\n");
}