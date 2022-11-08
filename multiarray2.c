// write a programe to accept 5 student marks for 5 subject also find total of all 5 student ,average of each student
#include <stdio.h>
void main()
{
    int student[5][5], count, temp, sum[5], total;
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
    // printf("\nEnter marks for student 2 ");
    // for (count = 0; count < 5; count++)
    // {
    //     printf("\nEnter marks of subject %d ", count + 1);
    //     scanf("%d", &student[1][count]);
    // }
    // printf("\nEnter marks for student 3 ");
    // for(count=0;count<5;count++)
    // {
    //     printf("\nEnter marks of subject %d",count+1);
    //     scanf("%d", &student[2][count]);
    // }
    for (temp = 0; temp < 5; temp++)
    {
        for (count = 0; count < 5; count++)
        {
            printf("\nthe marks of student %d for subject %d = %d ", temp + 1, count + 1, student[temp][count]);
        }
        printf("\n");
    }
    // for(count=0;count<5;count++)
    // {
    //     printf("\nthe marks of student 2 for subject %d = %d",count+1,student[1][count]);
    // }
    // printf("\n");
    for (temp = 0; temp < 5; temp++)
    {
        sum[temp] = 0;
        for (count = 0; count < 5; count++)
        {
            sum[temp] = sum[temp] + student[temp][count];
        }
        printf("\nthe value of total for student %d is %d ", temp + 1, sum[temp]);
    }
    total = 0;
    for(temp=0;temp<5;temp++)
    {
        total = total + sum[temp];
    }
    printf("\nthe value of total of all student is %d ",total);
    // sum[0]=sum[0]+student[0][1];
    // sum[0]=sum[0]+student[0][2];
    // sum[0]=sum[0]+student[0][4];
    // sum[0]=sum[0]+student[0][5];
    // sum[1] = 0;
    // for(count=0;count<5;count++)
    // {
    //     sum[1] = sum[1] + student[1][count];
    // }
    // printf("\nthe value of total for student 2 is %d ", sum[1]);
    average=total/5;
    printf("\nthe value of average for all student is %f",average);
}