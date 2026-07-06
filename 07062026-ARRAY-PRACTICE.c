#include<stdio.h>

int sum(int stuArr[], int length)
{
    int total_sum = 0;

    for(int i = 0; i < length; i++)
    {
        total_sum += stuArr[i];
    }

    return total_sum;
}

float average(int stuArr[], int length)
{
    return ((float)sum(stuArr, length)/length);
}

int main()
{
    int studentNum;
    printf("How many students? ");
    scanf("%d", &studentNum);

    int studentArray[studentNum];

    for(int i = 0; i < studentNum; i++)
    {
        printf("Enter grade %d: ", i + 1);
        scanf("%d", &studentArray[i]);
    }

    printf("\nGrades: ");
    for(int i = 0; i < studentNum; i++)
    {
        printf(" %d", studentArray[i]);
    }

    printf("\nSum:     %d", sum(studentArray, studentNum));
    printf("\nAverage: %d", average(studentArray, studentNum));


    return 0;
}