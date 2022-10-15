// write a programe to findout which number is greater out of given three number 
#include<stdio.h>
void main()
{
    int number1,number2,number3;
    printf("Enter value of number 1 ");
    scanf("%d",&number1);
    printf("Enter value of number 2 ");
    scanf("%d",&number2);
    printf("Enter value of number 3 ");
    scanf("%d",&number3);
    printf("\n\n\nThe value of number 1 is %d",number1);
    printf("\nThe value of number 2 is %d",number2);
    printf("\nThe value of number 3 is %d ",number3);
    if(number1>number2 && number1>number3)
    {
        printf("\nThe value of number 1 is greatest ");
    }
    else if(number2> number3 && number2>number1)
    {
        printf("\nthe value of number 2 is greatest ");
    }
    else if(number3 > number1 && number3>number2)
    {
        printf("\nthe value of number 3 is greatest ");
    }
    else
    {
        printf("\nall are same ");
    }
    printf("\nGoodbyee..");
}