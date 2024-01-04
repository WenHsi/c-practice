#include <stdio.h>
void countTo1(int);
void countTo3(int);

int main() {
  countTo1(3);
  printf("---\n");
  countTo3(1);
  return 0;
}

void countTo1(int i) {
  if (i > 0) {
    printf("%d\n", i);
    return countTo1(i - 1);
  }
}

void countTo3(int i) {
  if (i <= 3) {
    printf("%d\n", i);
    return countTo3(i + 1);
  }
}
