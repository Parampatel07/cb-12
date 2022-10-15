// write a programe to findout whether the user given letter is vowel or not 
#include<stdio.h>
void main()
{
    char letter;
    printf("Enter any one letter ");
    scanf("%c",&letter);

    printf("the letter entered is %c \n",letter);

    if(letter=='a' || letter=='A')
    {
        printf("it is vowel ");
    }
    else if(letter=='e' || letter=='E')
    {
        printf("it is vowel ");
    }
    else if(letter=='i' || letter=='I')
    {
        printf("it is vowel ");
    }
    else if(letter=='o' || letter=='O')
    {
        printf("it is vowel ");
    }
    else if(letter=='u' || letter=='U')
    {
        printf("it is vowel ");
    }
    else
    {
        printf("it is not vowel ");
    }
    printf("\nGoodbyee..");
}