#include <stdio.h>

int main() {
  int a[4] = {1, 2, 7, 8};
  int b[4] = {9, 10};
  int c[4] = {3, 5};
  int *p[3] = {a, b, c};
  int *ptrt = (&a[0]) + 2;
  printf("%d\n", *ptrt + 1);

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%2d ", p[i][j]);
    }
    printf("\n");
  }

  int t1 = *((&b[0]) + 1) = 15;
  int t2 = (&a[0])[3] = 19;
  printf("%d %d\n", t1, t2);

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%2d ", p[i][j]);
    }
    printf("\n");
  }

  int arr[5] = {1, 2, 3, 4, 5};
  int *ptr = arr; // 指向数组的指针

  int value = *(ptr + 1); // 解引用指针，获得数组的第一个元素的值
                          //=(&arr[0])[1];
  int value2 = ptr[1]; // 使用数组索引访问指针所指向的数组的第二个元素的值
  //以下皆相等
  printf("%d\n", *(ptr + 1));
  printf("%d\n", ptr[1]);
  printf("%d\n", (&arr[0])[1]);
  printf("%d\n", *((&arr[0]) + 1));

  return 0;
}