/*
 * POINTER PRACTICE - SWAP THREE NUMBERS
 * Write a function called swapThree that takes three
 * pointers and rotates their values like this:
 * first gets second's value
 * second gets third's value
 * third gets first's value
 *
 * Requirements:
 * - swapThree must take three pointers as parameters
 * - Use a temp variable to hold a value while swapping
 * - Ask for user input using scanf in main
 * - Pass addresses using & in main
 * - Print before and after values in main
 *
 * Expected Output:
 * Enter first number:  10
 * Enter second number: 20
 * Enter third number:  30
 *
 * Before: a=10 b=20 c=30
 * After:  a=20 b=30 c=10
 */

#include<stdio.h>

void swap(int *x, int *y, int *z)
{
    int temp = *x;
    *x = *y;
    *y = *z;
    *z = temp;

    printf("\nAfter: a=%d b=%d c=%d", *x, *y, *z);
}

int main()
{
    int a, b, c;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);

    printf("\nBefore: a=%d b=%d c=%d", a, b, c);
    swap(&a, &b, &c);

    return 0;
}