#include <stdio.h>

int main() {
    int num;
    printf("enter a number: ");
    scanf("%d", &num);

    if ( num % 3 == 0 )
    {
        printf("%d is divisible by 3\n odd", num);

     }  else {
            printf("%d is not divisible by 3\n even", num);
        }
        return 0;
    }
