#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  int t = time(0);
  //   printf("%d", t);
  srand(t);
  for (int i = 1; i <= 5; ++i) {
    printf("%d\n", rand());
  }
  return 0;
}