#include <stdio.h>
int main() {
  int N;
  int count;
  for (count = 1; !(count % 3 == 2 && count % 5 == 3 && count % 7 == 2);
       count++)
    ;

  printf("%d\n", count);
  return 0;
}