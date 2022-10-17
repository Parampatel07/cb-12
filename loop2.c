// Write a programe to print 1 to 2000 numbers
#include<stdio.h>
void main()
{
    int number = 1;
    while(number<=2000)
    {
        printf("%d, ", number);
        number = number + 1;
    }
}