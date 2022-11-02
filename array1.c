// Example of array
#include <stdio.h>
void main()
{
    // declaration of array
    //  datatype array-name[size];
    int marks[5], count = 0;
    for (count = 0; count < 5; count++)
    {
        printf("Enter value of marks %d ", count + 1);
        scanf("%d", &marks[count]);
    }
    // printf("Enter value of marks 2 ");
    // scanf("%d",&marks[1]);
    // printf("Enter value of marks 3 ");
    // scanf("%d",&marks[2]);
    // printf("Enter value of marks 4 ");
    // scanf("%d",&marks[3]);
    // printf("Enter value of marks 5 ");
    // scanf("%d",&marks[4]);
    for(count=0;count<5;count++)
    {
    printf("\nThe value of marks %d is %d",count+1,marks[count]);
    }
    // printf("\nThe value of marks 2 is %d", marks[1]);
    // printf("\nThe value of marks 3 is %d", marks[2]);
    // printf("\nThe value of marks 4 is %d", marks[3]);
    // printf("\nThe value of marks 5 is %d", marks[4]);
}