// write a program to findout all the perfect numbers between given range.
// 0.....9999999
#include <stdio.h>
#include<stdlib.h>
void main()
{
    int count = 0, number = 0, sum = 0;
    // for (number = 1; number < 8128; number++)
    // {
        printf("Enter value of number ");
        scanf("%d",&number);
        for (count = 1; count < number; count++)
        {
            if (number % count == 0)
            {
                sum = sum + count;
                // printf("\nthe value of count is %d ",count);
                // break;
            }
        }
        // sum=sum-1;
        // printf("\nthe value of sum is %d ",sum);
        if (sum == number)
        {
            printf("\nthe %d is perfect number ",number);
        }
    // }
            printf("goodbyee..");
}