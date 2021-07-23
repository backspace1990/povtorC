#include <stdio.h>

int main(void)
{
    int c;
    
    c = getchar() != EOF;
    if(c == 1)
        {
            printf("result getchar() != EOF ~~~ 1\n");
        }
    else
        {
            printf("result getchar() != EOF ~~~ 0\n");
        }
    return (0);
}
