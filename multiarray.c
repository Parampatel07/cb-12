// Example of multiarray
#include <stdio.h>
void main()
{
    int student[5][5], count, temp;

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
    for(temp=0;temp<5;temp++) 
    {
        for (count = 0; count < 5; count++)
        {
            printf("\nthe marks of student %d for subject %d = %d ",temp+1,count + 1, student[temp][count]);
        }
        printf("\n");
    }
    // for(count=0;count<5;count++)
    // {
    //     printf("\nthe marks of student 2 for subject %d = %d",count+1,student[1][count]);
    // }
    // printf("\n");
}