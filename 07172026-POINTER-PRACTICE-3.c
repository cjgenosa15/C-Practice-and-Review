/*
 * POINTER PRACTICE - CHALLENGE 1
 * FIND LARGEST THROUGH POINTERS
 *
 * WHAT IS THE PROGRAM?
 * A program that finds the largest of three numbers
 * using pointers and stores the result in a fourth pointer.
 *
 * STEP BY STEP:
 * STEP 1 - Create findLargest function:
 *   - Takes four pointers: (int *a, int *b, int *c, int *largest)
 *   - Compare *a, *b, *c against each other
 *   - Store the largest value into *largest
 *
 * STEP 2 - Inside main:
 *   - Declare four integers: num1, num2, num3, largest
 *   - Ask user to input three numbers using scanf
 *   - Print the three numbers before calling function
 *   - Call findLargest passing addresses of all four
 *   - Print the largest value after calling function
 *
 * Expected Output:
 * Enter three numbers:
 * Number 1: 10
 * Number 2: 45
 * Number 3: 23
 *
 * Largest: 45


 * POINTER PRACTICE - CHALLENGE 2
 * SWAP WITHOUT TEMP
 *
 * WHAT IS THE PROGRAM?
 * Swap two numbers using pointers but WITHOUT
 * using a temp variable — only math!
 *
 * STEP BY STEP:
 * STEP 1 - Create swapNoTemp function:
 *   - Takes two pointers: (int *a, int *b)
 *   - Use only these three math operations:
 *     *a = *a + *b;
 *     *b = *a - *b;
 *     *a = *a - *b;
 *
 * STEP 2 - Inside main:
 *   - Declare two integers: x, y
 *   - Ask user to input two numbers using scanf
 *   - Print values BEFORE calling swapNoTemp
 *   - Call swapNoTemp passing addresses of x and y
 *   - Print values AFTER calling swapNoTemp
 *
 * Expected Output:
 * Enter two numbers:
 * Number 1: 10
 * Number 2: 20
 *
 * Before: x=10 y=20
 * After:  x=20 y=10

 * POINTER PRACTICE - CHALLENGE 3
 * DISTANCE BETWEEN TWO NUMBERS
 *
 * WHAT IS THE PROGRAM?
 * A program that finds the absolute difference
 * between two numbers using pointers and stores
 * the result in a third pointer.
 *
 * STEP BY STEP:
 * STEP 1 - Create distance function:
 *   - Takes three pointers: (int *a, int *b, int *result)
 *   - Find the difference between *a and *b
 *   - Store the ABSOLUTE value into *result
 *   - To get absolute value:
 *     if(*a > *b) → *result = *a - *b
 *     else        → *result = *b - *a
 *
 * STEP 2 - Inside main:
 *   - Declare three integers: num1, num2, result
 *   - Ask user to input two numbers using scanf
 *   - Call distance passing addresses of all three
 *   - Print the distance after calling function
 *
 * Expected Output:
 * Enter two numbers:
 * Number 1: 10
 * Number 2: 45
 *
 * Distance: 35
 */

#include<stdio.h>

int main(){

    return 0;
}