#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;

    // output result
    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}
