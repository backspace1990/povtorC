#include <stdio.h>

int main(void)
{
    int s, b, t, c;

    printf("to Exit ' control + d '\n");
    s = 0;
    b = 0;
    t = 0;
    while((c = getchar()) != EOF)
    {
        if(c == ' ')
            s++;
        if(c == '\t')
            t++;
        if(c == '\n')
            b++;
    }
    printf("spaces : %d\ntabs : %d\nnew lines : %d\n", s, t, b);
    return (0);
}