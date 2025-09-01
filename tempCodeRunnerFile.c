#include <stdio.h>

int main() {
    float km, meters, cm, feet, inches;

    printf("Enter distance in kilometers: ");
    scanf("%f", &km);

    
    meters = km * 1000;         
    cm = meters * 100;          
    inches = meters * 39.3701;  
    feet = meters * 3.28084;   

    // Output results
    printf("\nDistance in meters: %.2f m", meters);
    printf("\nDistance in centimeters: %.2f cm", cm);
    printf("\nDistance in feet: %.2f ft", feet);
    printf("\nDistance in inches: %.2f in\n", inches);

    return 0;
}
