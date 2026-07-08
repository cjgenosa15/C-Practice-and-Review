/* FUNCTION PRACTICE - NUMBER ANALYZER
 * Ask the user for a number and run it through
 * all of these functions:
 * 1. isEven(num)       - prints even or odd
 * 2. isPrime(num)      - prints prime or not prime
 * 3. isPositive(num)   - prints positive, negative, or zero
 * 4. sumOfDigits(num)  - adds all digits together
 *                        ex: 123 = 1 + 2 + 3 = 6
 * 5. reverseNum(num)   - reverses the number
 *                        ex: 123 = 321
 */
#include<stdio.h>

void isEven(int num)
{
    if(num % 2 != 0)
    {
        printf("\n%d is Odd", num);
    }
    else
    {
        printf("\n%d is Even", num);
    }
}

void isPrime(int num)
{
    if(num < 2)
    {
        printf("\n%d is Not Prime", num);
        return;
    }
    
    else if(num % 2 == 0)
    {
        printf("\n%d is Not Prime", num);
        return;
    }

    else
    {
        for(int i = 2; i < num; i++)
        {
            if(num % i == 0)
            {
                printf("\n%d is Not Prime", num);
                return;
            }
        }

        printf("\n%d is Prime", num);
    }
}

void isPositive(int num)
{
    if(num > 0)
    {
        printf("\n%d is Positive", num);
    }

    else if(num < 0)
    {
        printf("\n%d is Negative", num);
    }
    else
    {
        printf("\n%d is Zero", num);
    }
}

int sumOfDigits(int num)
{
    int sum = 0;

    do
    {
        sum += num % 10;
        num /= 10;
    }
    while(num != 0);

    return sum;
}

int reversed(int num)
{
    int rev = 0;

    do
    {
        rev *= 10;
        rev += (num % 10);
        num /= 10;
    }
    while(num != 0);

    return rev;
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("\n--- Number Analysis ---");
    isEven(number);
    isPrime(number);
    isPositive(number);
    printf("\nSum of Digits: %d", sumOfDigits(number));
    printf("\nReversed: %d", reversed(number));

    return 0;
}