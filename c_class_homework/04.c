#include <stdio.h>

int main() {
  int a, b, c, d;
  int min, max;
  printf("Please enter fourth integer: ");
  scanf("%d%d%d%d", &a, &b, &c, &d);
  min = a;
  if (b < min) {
    min = b;
  }
  if (c < min) {
    min = c;
  }
  if (d < min) {
    min = d;
  }

  max = a;
  if (b > max) {
    max = b;
  }
  if (c > max) {
    max = c;
  }
  if (d > max) {
    max = d;
  }

  printf("Min: %d\n", min);
  printf("Max: %d\n", max);
  printf("作業難度評分: %.1f / 10 \n", 3.5);
  return 0;
}