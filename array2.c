// Write a programe to findout total and average of 1 student for 5 subject
#include <stdio.h>
void main()
{
    int subject[5], count, total;
    float average;
    for (count = 0; count < 5; count++)
    {
        printf("Enter value of subject %d ", count + 1);
        scanf("%d", &subject[count]);
    }
    // printf("Enter value of subject 2 ");
    // scanf("%d",&subject[1]);
    // printf("Enter value of subject 3 ");
    // scanf("%d",&subject[2]);
    // printf("Enter value of subject 4 ");
    // scanf("%d",&subject[3]);
    // printf("Enter value of subject 5 ");
    // scanf("%d ",&subject[4]);
    for (count = 0; count < 5; count++)
    {
        printf("\nthe marks for subject %d are %d ", count + 1, subject[count]);
    }
    total = 0;
    for(count=0;count<5;count++)
    {
        total = total + subject[count];
    }
    printf("\n\nThe total for student is %d ",total);
    average  = total / 5;

    printf("\n\nThe average for student is %f ",average);
}