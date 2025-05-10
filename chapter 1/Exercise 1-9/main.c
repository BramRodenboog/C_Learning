#include <stdio.h>

int main(){
    // to trigger EOF press ctrl + d
    int c;
    char last;
    while((c = getchar()) != EOF){
        if (c != ' '){
            printf("%c", c);
        } else if (c == ' ') {
            if (last != ' '){
                printf("%c", c);
            }
        }
        last = c;
    }
}