#include <stdio.h>

float fahrToCelsius(float fahr);

int main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;


    fahr = lower;

    printf("Fahr\tCelsius\n");
    printf("______________\n");
    while (fahr <= upper) {
        float celsius = fahrToCelsius(fahr);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}

float fahrToCelsius(float fahr) {
    return (5.0/9.0) * (fahr-32.0);
}