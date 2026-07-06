#include<stdio.h>

int sum(int array[], int length)
{
    int total_sum = 0;
    
    for(int i = 0; i < length; i++)
    {
        total_sum += array[i];
    }
    
    return total_sum;
    
}

float average(int array[], int length)
{
    return ((float)sum(array, length)/length);
}

int largest(int array[], int length)
{
    int large = array[0];
    for(int n = 0; n < length; n++)
    {
        if(large < array[n])
        {
            large = array[n];
        }
    }
    return large;
}

int smallest(int array[], int length)
{
    int small = array[0];
    for(int n = 0; n < length; n++)
    {
        if(small > array[n])
        {
            small = array[n];
        }
    }
    return small;
}

int main()
{    
    int array[5];
    int length = 5;

    for(int i = 0; i < 5; i++)
    {
        printf("\nEnter a number %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    
    printf("\nNumbers: ");
    
    for(int i = 0; i < length; i++)
    {
        printf(" %d", array[i]);
    }
    
    printf("\nSum:      %d", sum(array, length));
    printf("\nAverage:  %.2f", average(array, length));
    printf("\nLargest:  %d", largest(array, length));
    printf("\nSmallest: %d\n", smallest(array, length));
    
    return 0;
}