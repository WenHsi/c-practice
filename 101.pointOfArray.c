#include <stdio.h>
int print(int (*)[]);

int main() {
  int v[3] = {4, 5, 6};
  print(&v);
  return 0;
}

int print(int (*q)[]) {
  int i;
  for (i = 0; i < 3; i++) {
    printf("%d ", (*q)[i]);
  }
  printf("\n");
}