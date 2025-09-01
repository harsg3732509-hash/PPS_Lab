#include <stdio.h>

int main() {
    int num;
    printf("enter the number: ");
    scanf("%d", &num);

    if ( num %2 == 0)  {
        if ( num %5 == 0) {
        printf("even and divisible by 5\n");
    } 
    else  {
        printf("even but not divisible by 5\n");
    }
  } 
  else {
    printf("odd\n");
  }

  return 0;
}