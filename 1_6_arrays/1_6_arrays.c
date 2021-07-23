#include <stdio.h>

int main(void)
{
    int c, i, n_white, n_other;
    int ndigit[10];

    n_white = 0;
    n_other = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i]= 0;
    
    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9' )
            ++ndigit[c - '0' ];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++n_white;
        else
            ++n_other;
    }
    printf ("numbers =");
    for (i=0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    printf (", character - separator = %d, other = %d\n", n_white, n_other);
}
