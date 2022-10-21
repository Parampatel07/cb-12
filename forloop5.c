#include <stdio.h>
void main()
{
    int count = 0, temp = 0;
    for (count = 0; count < 6; count++)
        printf("_");
    printf("*_");
    printf("\n");
    for (count = 0; count < 5; count++)
    {
        printf("_");
    }
    printf("*_");
    printf("*_");
    printf("\n");
    for (count = 0; count < 4; count++)
    {
        printf("_");
    }
    for (temp = 0; temp < 3; temp++)
    {
        printf("*_");
    }
    printf("\n");
    for (count = 0; count < 3; count++)
    {
        printf("_");
    }
    for(temp=0;temp<4;temp++)
    {
        printf("*_");
    }
}