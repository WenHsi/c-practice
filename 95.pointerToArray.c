#include <stdio.h>
//兩種宣告方式，是等價的。因為都是傳遞位址，陣列也是傳遞位址。
void reassign(int *);
void printArr(int[]);

int main() {
  int i, v[5] = {1, 3, 5, 7, 11};
  // 可重置為v[]={0~4}; 做測試用。
  reassign(v);
  printArr(v);
  //   printf("%d\n", *(v + 4)); // 11 。會隱性轉型。
  return 0;
}

//與宣告時的 void reassign(int *) 等同。
//做測試用。
void reassign(int v[]) {
  int *n = v;
  int i = 0;
  // v+5 == &v[0]+5 。隱性轉型。
  for (n = v; n != v + 5; n++) {
    // *n == v[0];
    *n = i;
    i++;
  }
}

void printArr(int v[]) {
  // int *n = &v[0];
  for (int *n = v; n != v + 5; /*先省略。*/) {
    //               //*也可寫成*n++;
    printf("%d\n", *n++);
  }
  //另一個版本，用i印次數。
  // int i;
  //   for (i = 1; i <= 5; i++) {
  //     printf("%d\n", *n);
  //     n++; // n = n + 1;
  //   }
}