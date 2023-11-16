#include <stdio.h>
#include <stdlib.h>
#define STUDENT 3
#define EXAM 4

int minimum(const int grades[][EXAM],int pupils,int tests);
int maximum(const int grades[][EXAM],int pupils,int tests);
double average(const int setofgrades[],int tests);
void printarray(const int grades[][EXAM],int pupils,int tests);

int main(void)
{
    int student;
    const int studentgrades[STUDENT][EXAM] =
    {{77,68,86,73},
     {96,87,89,78},
     {70,90,86,81}};
    
    printf("The array is:\n");
    printarray(studentgrades,STUDENT,EXAM);

    printf("\n\nLowest grade: %d\nHighest grade: %d\n",minimum(studentgrades,STUDENT,EXAM),
        maximum(studentgrades,STUDENT,EXAM));
    for (student = 0;student < STUDENT;student++)
    {
        printf("The average grade for student %d is %.2f\n",student,average(studentgrades[student],EXAM));
    }

    system("pause");
    return 0;
}

int minimum(const int grades[][EXAM],int pupils,int tests)
{
    int min = grades[0][0];
    for (int i = 0;i < pupils;i++)
    {
        for (int j = 0;j < tests;j++)
        {
            if (grades[i][j] < min)
                min = grades[i][j];
        }
    }
    return min;
}

int maximum(const int grades[][EXAM],int pupils,int tests)
{
    int max = grades[0][0];
    for (int i = 0;i < pupils;i++)
    {
        for (int j = 0;j < tests;j++)
        {
            if (grades[i][j] > max)
                max = grades[i][j];
        }
    }
    return max;
}

double average(const int setofgrades[],int tests)
{
    double tt = 0;
    for (int i = 0;i < tests;i++)
    {
        tt +=setofgrades[i];
    }
    tt /= 4;
    return tt;
}

void printarray(const int grades[][EXAM],int pupils,int tests)
{
    printf("                 [0] [1] [2] [3]\n");
    for (int i = 0;i < pupils;i++)
    {
        printf("studentGrades[%d] ",i);
        for (int j = 0;j < tests;j++)
        {
            printf("%d  ",grades[i][j]);
        }
        printf("\n");
    }
}