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

    for
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
    printf("Sum of Digits: %d", sumOfDigits(number));
    //isEven(number);

    return 0;
}