#include <stdio.h>

int main(void)
{
    int i, leng;

    leng = 0;
    while((i = getchar()) != EOF)
    {
        if(i == '\n')
            break;
        ++leng;

    }
    printf("lenght str ~~ %d \n", leng);
    return (0);
}