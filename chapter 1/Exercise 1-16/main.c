#include <stdio.h>
#define MAXLINE 1000

int customgetLine(char line[], int maxline);
void copy(char to[], char from[]);



int main() {
    int len;

    int max;
    char line[MAXLINE];
    char longest[MAXLINE];
    int sizeOfLine;

    max = 0;
    while ((len = customgetLine(line, MAXLINE))> 0)
        printf("[len]: %d, and the line is: %s", len, line);
        if (len > max){
            max = len;
            copy(longest, line);

        }
    if (max > 0)
        printf("%s", longest);

    return 0;
    
    
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
void copy(char to[], char from[]){
    int i;
    i = 0;
    while ((to[i] = from[i])!= '\0')
        ++i;
    
}



