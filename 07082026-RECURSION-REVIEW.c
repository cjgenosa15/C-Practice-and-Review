/* RECURSION PRACTICE - BASIC
 * Write three recursive functions:
 * 1. countdown(n)  - counts down from n to 0
 *                    prints DONE! at the end
 * 2. factorial(n)  - multiplies n down to 1
 *                    ex: factorial(5) = 5x4x3x2x1 = 120
 * 3. sumDown(n)    - adds all numbers from n down to 1
 *                    ex: sumDown(5) = 5+4+3+2+1 = 15
 */
#include<stdio.h>

void countdown(int n)
{
    if(n == 0)
    {
        printf("DONE!\n\n");
        return;
    }

    printf("%d\n", n);
    countdown(n-1);
}

int factorial(int n)
{
    if(n == 1)
    {
        return 1;
    }

    return(n * factorial(n - 1));
}

int sumDown(int n)
{
    if(n == 1)
    {
        return 1;
    }

    return(n + sumDown(n-1));
}

int main()
{
    countdown(5);
    printf("%d\n\n", factorial(5));
    printf("%d", sumDown(5));

    return 0;
}