// write a programe to make inverted half numbered pyramid
#include <stdio.h>
void main()
{
    int count ,flash;
    for(flash=6;flash>0;flash--)
    {
        for (count = 0; count < flash; count++)
        {
            printf("%d ",count+1);
        }
        printf("\n");
    }
}