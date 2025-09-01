#include <stdio.h>>

int main() {
    float principal, rate, time, simple_interest;

    printf("enter the principal amount: ");
    scanf("%f", &principal );

    printf("enter the rate of interest: ");
    scanf("%f", &rate );

    printf("enter time in years: ");
    scanf("%f", &time );

    simple_interest = (principal * rate * time ) / 100;

    printf("\nsimple interest = %.2f\n", simple_interest);

    return 0;

}