#include <stdio.h>
void main()
{
    int count = 0,flash=1;
    while(flash<=5)
    {
        while (count < flash)
        {
            printf("*");
            count++;
        }
        printf("\n");
        count = 0;
        flash++;
    }
}