#include <stdio.h>

int main(void)
{
    int fahrenheit, celsius;
    int upper, step, lower;

    lower = 0;
    upper = 300;
    step = 20;

    fahrenheit = lower;
    while (fahrenheit <= upper)
    {
        celsius = 5 * (fahrenheit - 32) / 9;
        if(fahrenheit <= 80)
            printf("fahrenheit : %d\t         - Celsius: %d\n", fahrenheit, celsius);
        else
            printf("fahrenheit : %d\t - Celsius: %d\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + step; 
    }
    return (0);
}