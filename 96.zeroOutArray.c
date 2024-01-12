#include <stdio.h>

int main() {
  int i, *n;
  int v[5] = {1, 2, 3, 4, 5};
  for (n = v; n != v + 5; n++) {
    printf("%d\n", *n);
  }
  n = v;
  while (n != v + 5) {
    *n++ = 0;
  }

  //   for (n = v; n != v + 5; n++) {
  //     *n = 0;
  //   }

  for (n = v; n != v + 5; n++) {
    printf("%d\n", *n);
  }
  return 0;
}