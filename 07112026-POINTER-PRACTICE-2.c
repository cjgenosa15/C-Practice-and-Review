/* PRACTICE PROBLEM: Reverse an Array Using Pointers
 * ---------------------------------------------------
 * Write a program that reverses the elements of an integer array
 * IN PLACE, using pointers (no array indexing like arr[i]).
 *
 * - Create a function that takes pointers and reverses the array.
 * - In main(), declare an array, print it, reverse it, print it again.
 *
 * Expected behavior example:
 *    Input:  1 2 3 4 5 6
 *    Output: 6 5 4 3 2 1
 */

#include<stdio.h>

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};

    printf("Input:  %d %d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);
}