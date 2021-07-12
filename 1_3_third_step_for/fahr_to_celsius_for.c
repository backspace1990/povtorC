#include <stdio.h>

int main(void)
{
    int fahrenheit;

    for(fahrenheit = 0; fahrenheit <= 300; fahrenheit = fahrenheit + 20)
        printf("Fahrenheit : %d ~~~ Celsius : %d\n", fahrenheit, 5 * (fahrenheit - 32) / 9);
    return (0);
}