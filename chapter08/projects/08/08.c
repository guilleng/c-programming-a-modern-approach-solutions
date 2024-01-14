/*
 * C programming: A Modern Approach. Chapter 08, Project 08
 * Date: February 2023
 * Description: Performs computations over 5 quizzes of 5 students.
 */

#include <stdio.h>

int main(void)
{
    int matrix[5][5] = { 0 };
    int accum = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter quiz grades for student %d: ", i + 1);
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\nStudent %d ", i + 1);
        for (int j = 0; j < 5; j++)
        {
            accum += matrix[i][j];
        }
        printf("total score: %d, average: %g", accum, (double) accum / 5);
        accum = 0;
    }
    printf("\n");

    for (int i = 0, high, low; i < 5; i++)
    {
        high = low = matrix[i][0];
        printf("\nQuiz %d ", i + 1);
        for (int j = 0; j < 5; j++)
        {
            accum += matrix[j][i];
            if (matrix[j][i] > high)
            {
                high = matrix[j][i];
            }
            if (matrix[j][i] < low)
            {
                low = matrix[j][i];
            }
        }
        printf("average score: %g. High: %d, low: %d", 
                (double) accum / 5, high, low);
        accum = 0;
    }
    printf("\n");

    return 0;
}
