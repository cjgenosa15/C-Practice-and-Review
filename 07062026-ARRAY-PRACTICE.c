/* ARRAY PRACTICE - STUDENT GRADE SYSTEM
 * Ask the user how many students there are.
 * Input each student's grade, print all grades,
 * then print the sum, average, highest and lowest grade.
 * Also print how many students passed (grade >= 75)
 * and how many failed.
 */
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
    return (((float)sum(stuArr, length))/length);
}

int highest(int stuArr[], int length)
{
    int high = stuArr[0];  

    for(int i = 0; i < length; i++)
    {
        if(high < stuArr[i])
        {
            high = stuArr[i];
        }
    }

    return high;
}

int lowest(int stuArr[], int length)
{
    int low = stuArr[0];

    for(int i = 0; i < length; i++)
    {
        if(low > stuArr[i])
        {
            low = stuArr[i];
        }
    }

    return low;
}

int main()
{
    int studentNum;
    printf("How many students? ");
    scanf("%d", &studentNum);

    int studentGrade[studentNum];

    for(int i = 0; i < studentNum; i++)
    {
        printf("Enter grade %d: ", i + 1);
        scanf("%d", &studentGrade[i]);
    }

    printf("\nGrades:  ");
    for(int i = 0; i < studentNum; i++)
    {
        printf(" %d", studentGrade[i]);
    }

    int passedNum = 0;
    int failedNum = 0;

    for(int i = 0; i < studentNum; i++)
    {
        if(studentGrade[i] >= 75)
        {
            passedNum++;
        }

        else
        {
            failedNum++;
        }
    }

    printf("\nSum:      %d", sum(studentGrade, studentNum));
    printf("\nAverage:  %.2f", average(studentGrade, studentNum));
    printf("\nHighest:  %d", highest(studentGrade, studentNum));
    printf("\nLowest:   %d", lowest(studentGrade, studentNum));
    printf("\nPassed:   %d", passedNum);
    printf("\nFailed:   %d", failedNum);

    return 0;
}