#include <stdio.h>
#include <string.h>

int main() {
  /* Allow!
     const char *source = "Hello";
     char source[6] = "Hello";*/
  char *source = "Hello";
  /* Error!
     char *destination;*/
  char destination[6];
  strcpy(destination, source);
  printf("%s\n", destination);
  return 0;
}