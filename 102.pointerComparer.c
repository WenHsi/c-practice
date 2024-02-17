#include <stdio.h>
int print(int (*q)[3]) {
  int i;
  for (i = 0; i < sizeof(*q) / sizeof((*q)[0]); i++) {
    // printf("%d ", *q);
    printf("%d ", (*q)[i]);
  }
  printf("\n");
}

int print2(int *q[]) {
  int i;
  for (i = 0; i < 3; i++) {
    printf("%d ", *q[i]);
  }
  printf("\n");
}

int main() {
  int v[3] = {5, 10, 15};

  int *n = v;

  int *p[3] = {&v[2], &v[1], &v[0]};

  int(*q)[3] = &v;

  print(q);
  print2(p);
  return 0;
}