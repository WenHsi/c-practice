#include <stdio.h>
int main() {
  int n;
  printf("Please enter the number to print 1 to N: ");
  scanf("%d", &n);
  for (int count = 1; count <= n; count++) {
    printf("%d\n", count);
  }
  return 0;
}