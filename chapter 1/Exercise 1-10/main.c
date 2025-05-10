#include <stdio.h>

int main(){
    // to trigger EOF press ctrl + d
    int c;
    while((c = getchar()) != EOF){
        switch (c)
        {
        case ' ':
            printf("\\b");
            break;
        case '\t':
            printf("\\t");
            break;
        case '\n':
            printf("\\n");
            break;
        case '\\':
            printf("\\");
            break;
        
        default: 
            printf("%c", c);
        }
        
    }

}