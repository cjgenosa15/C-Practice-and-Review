/* RECURSION PRACTICE - PASCAL'S TRIANGLE
 * Write a recursive function pascal(row, col) that
 * calculates each value in Pascal's Triangle.
 * Ask the user for the number of rows and print
 * the triangle using nested loops in main.
 *
 * Rules:
 * - Edges are always 1 (when col == 0 OR col == row)
 * - Every middle value = sum of two values above it
 *
 * Expected Output for 5 rows:
 * 1
 * 1 1
 * 1 2 1
 * 1 3 3 1
 * 1 4 6 4 1
 */
#include <stdio.h>

int pascal(int row, int col)
{
    if(col == 0 || col == row)
    {
        return 1;
    }

    return ((pascal(row - 1, col - 1)) + (pascal(row - 1, col)));
}

int main() {
    int rows;
    
    printf("Enter rows: ");
    scanf("%d", &rows);
    
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("%d ", pascal(i, j));
        }
        printf("\n");
    }
    return 0;
}