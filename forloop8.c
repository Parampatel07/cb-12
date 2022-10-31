// write a programe to make inverted half numbered pyramid
#include <stdio.h>
void main()
{
    int count ,flash,temp=1;
    for(flash=0;flash<=6;flash++)
    {
        for (count = 0; count <= flash; count++)
        {
            printf("%d ",temp);
        }
        printf("\n");
        temp++;
    }
}