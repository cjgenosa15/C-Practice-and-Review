#include<stdio.h>

float fah(float cel)
{
    return(cel * (9.0/5.0) + 32);
}

float kel(float cel)
{
    return(cel + 273.15);
}

float cel(float fah)
{
    return((fah - 32) * 5.0/9.0);
}

int main()
{
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    printf("\n--- Results ---");
    printf("\n%.2f°C = %.2f°F", celsius, fah(celsius));
    printf("\n%.2f°C = %.2fK", celsius, kel(celsius));

    printf("\n\nEnter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    printf("\n%.2f°F = %.2f°C", fahrenheit, cel(fahrenheit));

    return 0;
}