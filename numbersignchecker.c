#include <stdio.h>

int main() {
    int num;
    printf("enter the number: ");
    scanf("%d", &num);

    if ( num > 0 )  {
        printf("positive\n");
    }
     else if ( num < 0 )  {
        printf("negative\n");
    }
     else if ( num == 0 )  {
        printf("zero\n");
     }

     return 0;
}