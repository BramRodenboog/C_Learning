#include <stdio.h>

int main()
{
    int i, j, c;

    int alphabet[26];

    for (i = 0; i < 26; ++i)
    {
        alphabet[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c >= 'a' && c <= 'z')
        {
            // see ASCII 
            ++alphabet[c - 'a'];
        }
    }
    for (i = 0; i < 26; i++)
    {
        printf("%c: ", 'a' + i);
        for (j = 0; j < alphabet[i]; j++)
        {

            printf("*");
        }
        printf("\n");
    }
    return 0;
}