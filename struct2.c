// Write a programe to store 5 students marks , total, average,name
#include <stdio.h>
struct student
{
    int marks, total;
    float average;
    char name[25];
};
void main()
{
    struct student s[5];
    int count;
    for (count = 0; count < 5; count++)
    {
        printf("Enter value of marks for student %d ", count + 1);
        scanf("%d", &s[count].marks);
        printf("Enter  value of total for student %d ", count + 1);
        scanf("%d", &s[count].total);
        printf("Enter value of average for student %d ", count + 1);
        scanf("%f", &s[count].average);
        printf("Enter value of name for student %d ", count + 1);
        scanf("%s", &s[count].name);
    }

    for(count=0;count<5;count++)
    {
        printf("\nthe value of %d student marks is %d total is %d average is %.2f name is %s",count+1,s[count].marks, s[count].total, s[count].average, s[count].name);
    }
}