// write a programe to make half numbered pyramid
#include <stdio.h>
void main()
{
    int count,temp,size;
    printf("Enter value of size ");
    scanf("%d",&size);
    for(temp=0;temp<size;temp++)
    {
        for (count = 0; count <= temp; count++)
        {
            printf("%d ",count+1);
        }
        printf("\n");
    }
    // for (count = 0; count < 6; count++)
    // {
    //     printf("*");
    // }
    // printf("\n");
    // for (count = 0; count < 6; count++)
    // {
    //     printf("*");
    // }
    // printf("\n");
    // for(count=0;count<6;count++)
    // {
    //     printf("*");
    // }

    // printf("\n");
    // for(count=0;count<6;count++)
    // {
    //     printf("*");
    // }

    // printf("\n");
    // for(count=0;count<6;count++)
    // {
    //     printf("*");
    // }
}