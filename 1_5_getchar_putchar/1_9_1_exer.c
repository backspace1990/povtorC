#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF)
        if (c == ' ')
            printf("||");
        else if (c == '\t')
            printf("TT");
        else if (c == '\b')
            printf("BB");
        else
            putchar(c);

    return (0);
}