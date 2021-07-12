#include <stdio.h>

int main(void)
{
    int fahrenheit, celsius;
    int upper, step, lower;

    lower = 0;
    upper = 300;
    step = 20;
    printf("----------------------------------------------\n");
    printf("| Fahrenheit :     |       - Celsius:        |\n");
    printf("----------------------------------------------\n");
    fahrenheit = lower;
    while (fahrenheit <= upper)
    {
        celsius = 5 * (fahrenheit - 32) / 9;
        if(fahrenheit <= 80)
            {
                printf("| Fahrenheit : %d\t |     - Celsius: %d", fahrenheit, celsius);
                printf("    |\n");
            }
        else
            {
                printf("| Fahrenheit : %d\t | -    Celsius: %d|\n", fahrenheit, celsius);
            }
        fahrenheit = fahrenheit + step; 
    }
    printf("----------------------------------------------\n");
    return (0);
}