#include <stdio.h>

int main() {
    float  celsius, fahrenheit;
    
    printf("enter the temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;
    printf("temperature in celsius = %.2f\n", celsius);

    return 0;

}
