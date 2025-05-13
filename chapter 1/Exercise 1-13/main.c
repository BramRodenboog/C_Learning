#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int state, c;
    state = OUT;    

    while ((c = getchar())!= EOF){
        if (c == ' ' || c == '\t' || c == '\n' ){
            if (state == IN){
                printf("\n");
            }
        }
        else {
            if (state == OUT){
                state = IN;
            }
            printf("*");
        } 
    }
}