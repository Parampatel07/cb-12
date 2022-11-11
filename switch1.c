//write a programe to findout whether the given letter is vowel or not 
#include<stdio.h>
void main()
{
    char letter;

    printf("Enter value of letter ");
    scanf("%c",&letter);
    switch(letter)
    {
        case 'a':
        printf("It is vowel ");
        break;
        case 'e':
        printf("it is vowel ");
        break;
        case 'i':
        printf("it is vowel ");
        break;
        case 'o':
        printf("it is vowel ");
        break;
        case 'u':
        printf("it is vowel");
        break;
        default:
        printf("it is consonent ");
        break;
    }
}