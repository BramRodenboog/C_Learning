#include <stdio.h>

#define MAXLINE 1000
#define TABSIZE 8

int max;
char line[MAXLINE];
char longest[MAXLINE];

int Customgetline(void);
void copy(void);

int main()
{
    int len;
    extern int max;
    extern char longest[];
    max = 0;
    while ((len = Customgetline()) > 0)
        if (len > max){
            max = len;
            copy();
        }
    if (max > 0)
        printf("%s", longest);

    return 0;
}
int Customgetline(void)
{
    int c, i = 0, col = 0;
    extern char line[];
    while (i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n') {
        if (c == '\t') {
            int spaces = TABSIZE - (col % TABSIZE);
            while (spaces-- > 0 && i < MAXLINE - 1) {
                line[i++] = ' ';
                col++;
            }
        } else {
            line[i++] = c;
            col++;
        }
    }
    if (c == '\n') {
        line[i++] = c;
    }
    line[i] = '\0';
    return i;
}
void copy(void)
{
    int i;
    extern char line[], longest[];
    i = 0;
    while ((longest[i] = line[i]) != '\0')
        ++i;
}
