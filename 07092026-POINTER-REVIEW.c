/* POINTER PRACTICE - SQUARE IT
 * Write a function called squareIt that takes a pointer
 * to an integer and squares the value it points to.
 * Ask the user for a number in main, print the value
 * before and after calling squareIt.
 *
 * Requirements:
 * - squareIt must take a pointer as parameter (int *ptr)
 * - Use * to access and modify the value at the address
 * - Ask for user input using scanf in main
 * - Pass the address of the variable using & in main
 * - Print before and after values in main
 *
 * Expected Output:
 * Enter a number: 6
 * Before: 6
 * After:  36
 */

#include<stdio.h>

void squareIt (int *ptr)
{
    *ptr = *ptr * *ptr;
    printf("\nAfter: %d", *ptr);
}

int main()
{
    int base;

    printf("Enter a number: ");
    scanf("%d", &base);
    
    printf("\n\nBefore: %d", base);
    squareIt(&base);

    return 0;
}