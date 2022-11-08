// Write a programe to peform sorting of multiarray
#include <stdio.h>
void main()
{
    int student[5][5], count, temp, sum[5], total, flash,adder;
    float average;
    for (temp = 0; temp < 5; temp++)
    {
        printf("Enter marks for student %d ", temp + 1);
        for (count = 0; count < 5; count++)
        {
            printf("\nEnter marks of subject %d ", count + 1);
            scanf("%d", &student[temp][count]);
        }
    }
    // for (temp = 0; temp < 5; temp++)
    // {
    //     for (count = 0; count < 5; count++)
    //     {
    //         printf("\nthe marks of student %d for subject %d = %d ", temp + 1, count + 1, student[temp][count]);
    //     }
    //     printf("\n");
    // }
    for(adder=0;adder<5;adder++)
    {
        for (flash = 0; flash < 5; flash++)
        {
            for (count = flash + 1; count < 5; count++)
            {
                if (student[adder][flash] < student[adder][count])
                {
                    temp = student[adder][flash];
                    student[adder][flash] = student[adder][count];
                    student[adder][count] = temp;
                }
            }
        }
    }
     for (temp = 0; temp < 5; temp++)
    {
        for (count = 0; count < 5; count++)
        {
            printf("\nthe marks of student %d for subject %d = %d ", temp + 1, count + 1, student[temp][count]);
        }
        printf("\n");
    }
    // for (flash = 0; flash < 5; flash++)
    // {
    //     for (count = flash + 1; count < 5; count++)
    //     {
    //         if (student[1][flash] < student[1][count])
    //         {
    //             temp = student[1][flash];
    //             student[1][flash] = student[1][count];
    //             student[1][count] = temp;
    //         }
    //     }
    // }
    // for (flash = 0; flash < 5; flash++)
    // {
    //     for (count = flash + 1; count < 5; count++)
    //     {
    //         if (student[2][flash] < student[2][count])
    //         {
    //             temp = student[2][flash];
    //             student[2][flash] = student[2][count];
    //             student[2][count] = temp;
    //         }
    //     }
    // }
    // printf("\n\nThe value of student 1 higesht marks %d ", student[0][0]);

    // for (count = 2; count < 5; count++)
    // {
    //     if (student[0][1] < student[0][count])
    //     {
    //         temp = student[0][1];
    //         student[0][1] = student[0][count];
    //         student[0][count] = temp;
    //     }
    // }
}