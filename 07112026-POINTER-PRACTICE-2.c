/* PRACTICE PROBLEM: Reverse an Array Using Pointers
 * ---------------------------------------------------
 * Write a program that reverses the elements of an integer array
 * IN PLACE, using ONLY pointer arithmetic (no array indexing
 * like arr[i] is allowed anywhere in your logic).
 *
 * Requirements:
 * 1. Write a function:
 *      void reverseArray(int *start, int *end);
 *    - "start" points to the first element of the array
 *    - "end" points to the last element of the array
 *    - The function should swap elements from both ends,
 *      moving toward the middle, until start and end meet
 *      or cross each other.
 *
 * 2. Write a helper function:
 *      void swap(int *a, int *b);
 *    - Swaps the values pointed to by a and b.
 *
 * 3. In main():
 *    - Declare an array of at least 6 integers.
 *    - Print the array before reversing.
 *    - Call reverseArray(), passing a pointer to the first element
 *      and a pointer to the last element (hint: use arr and
 *      arr + size - 1).
 *    - Print the array after reversing to confirm it worked.
 *
 * Bonus challenge (optional):
 *    - Instead of passing arr + size - 1 in main, write another
 *      function that takes the array and its size, and internally
 *      calculates the "end" pointer itself.
 *
 * Expected behavior example:
 *    Input:  1 2 3 4 5 6
 *    Output: 6 5 4 3 2 1
 */

#include<stdio.h>

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int arrSize = sizeof(arr)/sizeof(arr[0]);

    printf("Input:  %d %d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);
}