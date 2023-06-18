#include <stdio.h>

int main(){
    int integer, sum=0;
    printf("Please enter the first integer: ");
    scanf("%d", &integer);
    sum=sum+integer;
    printf("Please enter the second integer: ");
    scanf("%d", &integer);
    sum=sum+integer;
    printf("Please enter the third inreger: ");
    scanf("%d", &integer);
    sum=sum+integer;
    printf("Sum is %d.\n", sum);
    return 0;
}