#include <stdio.h>

int main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    
    printf("celsius\tfahr\n");
    printf("______________\n");
    for (celsius = upper; celsius >= lower; celsius = celsius - step ){
        fahr = (9.0/5.0) * (celsius+32.0);
        printf("%3.0f\t%3.1f\n", celsius, fahr);
    }
    return 0;
}