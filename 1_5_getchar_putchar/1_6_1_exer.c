#include <stdio.h>

int main(void)
{
    int c, a;

    a = EOF;
    while((c = getchar()) != EOF)
    {
        if(a == -1)
        {
            printf("result first %d\n", a);
            a++;
            printf("result %d\n", putchar(a));
            break;
        }
        else if(a == 0)
        {
            printf("result %d\n", putchar(a));
            break;
        }
    }
    return (0);
}