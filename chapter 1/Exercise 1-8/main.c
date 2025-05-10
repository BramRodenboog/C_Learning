#include <stdio.h>

int main(){
    // to trigger EOF press ctrl + d
    int c, bs = 0,tb = 0, nl = 0;
    while((c = getchar()) != EOF){
        switch (c)
        {
        case ' ':
            bs++;
            break;
        case '\t':
            tb++;
            break;
        case '\n':
            nl++;
            break;
        }
        
    }
    printf("Blanks\tTabs\tNew lines\n");
    printf("------------------------\n");
    printf("%d\t%d\t%d\n", bs, tb, nl);

}