#include <stdio.h>
#define MAXLINE 1000


int customgetLine(char line[], int maxline);
int removeTrailing(char s[], int lim);


int main() {
    int len;
    char line[MAXLINE];

    while ((len = customgetLine(line, MAXLINE)) > 0) {
        printf("[len] before %d\n", len);
        if ((len = removeTrailing(line, MAXLINE))> 0){
            printf("%s", line);
            printf("[new len] %d\n ", len);
        }
    }
    
    
}

int customgetLine(char s[], int lim) {
    int c, i;
    int length = 0;
    for (i=0; i < lim -1 && (c=getchar())!= EOF && c!='\n'; ++i, ++length)
        s[i] = c;
    if (c == '\n'){
        s[i] = c;
        ++i;
        ++length;
    } else if (i >= lim - 1){
        int j;
        while ((j = getchar()) != EOF && j != '\n' )
        {
            ++length;
        }
        if (j == '\n'){
            ++length;
        }
        
    }

    s[i] = '\0';

    return length;
}


int removeTrailing(char s[], int lim){
    int i = 0;
    while (s[i] != '\n' && i < lim){
        ++i;
    }
    if (i == lim){
        return i;
    }
    --i;
    while(s[i] ==  ' ' || s[i] == '\t' && i >= 0){
        --i;
    }
    if (i >= 0){
        ++i;
        s[i] = '\n';
        ++i;
        s[i] = '\0';
    }
    return i;
}