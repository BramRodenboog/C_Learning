#include <stdio.h>
#define MAXLINE 1000


int customgetLine(char line[], int maxline);
int customReverse(char s[], int maxline);


int main() {
    int len;
    char line[MAXLINE];

    while ((len = customgetLine(line, MAXLINE)) > 0) {
        printf("[old]: \n%s", line);
        if ((len = customReverse(line, MAXLINE))> 0){
                printf("[new]: %s\n", line);
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


int customReverse(char s[], int lim){
    int begin = 0;
    int i = 0;
    while (s[i] != '\n' && i < lim){
        ++i;
    }

    while(begin < i){
        char temp = s[begin];
        s[begin] = s[i];
        s[i] = temp;
        ++begin;
        --i;
    }

    return i;
}