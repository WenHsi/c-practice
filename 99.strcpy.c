#include <stdio.h>
#include <string.h>

int main() {
  char *source = "Hello";
  char destination[6];
  strcpy(destination, source);
  printf("%s\n", destination);
  return 0;
}