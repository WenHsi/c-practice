#include <stdio.h>
void print_stars(int);
void print_triangle(int);

int main() {
  int N;
  printf("N= ");
  scanf("%d", &N);
  print_triangle(N);
  return 0;
}

void print_triangle(int N) {
  for (int i = 1; i <= N; ++i) {
    print_stars(i);
    printf("\n");
  }
}

void print_stars(int i) {
  for (int j = 1; j <= i; ++j) {
    printf("*");
  }
}
