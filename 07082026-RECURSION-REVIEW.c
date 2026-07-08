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