// Write a programe to make calc
#include <stdio.h>
void main()
{
    int num1, num2, option;
    float answer;
    printf("Enter value of number 1 ");
    scanf("%d", &num1);
    printf("Enter value of number 2 ");
    scanf("%d", &num2);
    printf("Select any one option ");
    printf("\nEnter 1 for addition ");
    printf("\nEnter 2 for subtraction ");
    printf("\nEnter 3 for division ");
    printf("\nEnter 4 for multiplication ");
    printf("\nEnter 5 for modlus ");
    printf("\nEnter 6 for minimum ");
    printf("\nEnter 7 for maximum ");
    printf("\nEnter 8 for equality ");
    scanf("%d", &option);
    if (option == 1)
    {
        answer = num1 + num2;
        printf("The value of answer is %f", answer);
    }
    else if (option == 2)
    {
        answer = num1 - num2;
        printf("The value of answer is %f", answer);
    }
    else if (option == 3)
    {
        answer = num1 / num2;
        printf("The value of answer is %f", answer);
    }
    else if (option == 4)
    {
        answer = num1 * num2;
        printf("The value of answer is %f", answer);
    }
    else if (option == 5)
    {
        answer = num1 % num2;
        printf("The value of answer is %f", answer);
    }
    else if (option == 6)
    {
        if (num1 < num2)
        {
            printf("Num1 is lowest ");
        }
        else if (num2 < num1)
        {
            printf("Num2 is lowest ");
        }
    }
    else if (option == 7)
    {
        if (num1 > num2)
        {
            printf("num1 is greater ");
        }
        else if (num2 > num1)
        {
            printf("num2 is greater ");
        }
    }
    else if (option == 8)
    {
        if (num1 == num2)
        {
            printf("Both are same ");
        }
        else 
        {
            printf("Both are not same ");
        }
    }
    else
    {
        printf("Invalid choice of option ");
    }
    printf("\nGoodbyee..");
}