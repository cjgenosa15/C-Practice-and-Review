/* FUNCTION PRACTICE - NUMBER CHECKER
 * Write three separate functions:
 * 1. isEven(num)      - prints if number is even or odd
 * 2. isPrime(num)     - prints if number is prime or not
 * 3. power(base, exp) - returns base to the power of exp
 *                       without using any library
 * Test all three functions in main with hardcoded values.
 */
#include<stdio.h>

void isEven(int num)
{
    if(num % 2 == 0)
    {
        printf("%d is Even\n", num);
    }
    
    else
    {
        printf("%d is Odd\n", num);
    }
}

void isPrime(int num)
{
    if(num < 2)
    {
        printf("%d is Not Prime\n", num);
        return;
    }

    else if(num % 2 == 0)
    {
        printf("%d is Not Prime\n", num);
        return;
    }

    else
    {
        for(int i = 2; i < num; i++)
        {
            if(num % i == 0)
            {
                printf("%d is Not Prime\n", num);
                return;
            }
        }

        printf("%d is Prime\n", num);
    }
}

int power(int base, int pow)
{
    int ans = base;
    
    for(int i = 1; i < pow; i++)
    {
        ans *= base;
    }

    return ans;
}

int main()
{
    isEven(4);
    isEven(7);
    isPrime(7);
    isPrime(10);
    printf("2^3 = %d\n", power(2, 3));
    printf("3^4 = %d\n", power(3, 4));
    return 0;
}