#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(void)
{
    int fahrenheit;

    for(fahrenheit = LOWER; fahrenheit <= UPPER; fahrenheit = fahrenheit + STEP)
        printf("Fahrenheit : %d ~~~ Celsius : %d\n", fahrenheit, 5 * (fahrenheit - 32) / 9);
    return (0);
}