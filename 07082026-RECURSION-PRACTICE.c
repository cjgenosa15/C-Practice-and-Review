/* RECURSION PRACTICE - ADVANCED
 * Write three recursive functions:
 * 1. power(base, exp)   - raises base to the power of exp
 *                         ex: power(2,3) = 2x2x2 = 8
 * 2. sumOfDigits(n)     - adds all digits recursively
 *                         ex: sumOfDigits(123) = 1+2+3 = 6
 * 3. fibonacci(n)       - returns the nth fibonacci number
 *                         ex: fibonacci(5) = 5
 *                         sequence: 1,1,2,3,5,8,13,21...
 */
#include<stdio.h>

int power(int base, int pow)
{
    if(pow == 1)
    {
        return base;
    }

    return(base * power(base, pow - 1));
}

int sumOfDigits(int num)
{
    if(num == 0)
    {
        return 0;
    }

    return((num % 10) + sumOfDigits(num /= 10));
}

int fibonacci(int num)
{
    if(num == 1 || num == 2)
    {
        return 1;
    }

    return(fibonacci(num - 1) + fibonacci(num - 2));
}

int main()
{
    printf("%d\n", power(2, 3));
    printf("%d\n", power(3, 4));
    printf("%d\n", sumOfDigits(123));
    printf("%d\n", sumOfDigits(456));
    printf("%d\n", fibonacci(5));
    printf("%d\n", fibonacci(6));
    return 0;
}