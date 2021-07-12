#include <stdio.h>
/* печать таблицы температур по Фаренгейту и Цельсию для
fahr = 0, 20 ... 300; вариант с плавающей точкой */
int main()
{
    float fahrenheit, celsius;
    int lower, upper, step;
    
    lower = 0; /* нижняя граница таблицы температурa */
    upper = 300; /* верхняя граница */
    step = 20; /* шаг */
    fahrenheit = lower;
    while (fahrenheit <= upper) 
    {
        celsius = (5.0/9.0) * (fahrenheit-32.0);
        printf ("%3.0f %6.2f\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + step;
    }
    return (0);
}