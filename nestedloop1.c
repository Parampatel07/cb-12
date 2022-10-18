// https://i1.faceprep.in/fp/articles/img/46684_1580817324.png
// half pyramid
#include <stdio.h>
void main()
{
    int count = 0,flash=1,size;
    printf("Enter size of triagnle ");
    scanf("%d",&size);
    while(flash<=size)
    {
        while (count < flash)
        {
            printf("*");
            count = count + 1;
        }
        printf("\n");
        count = 0;
        flash++;
    }
    // while (count < 2)
    // {
    //     printf("*");
    //     count = count + 1;
    // }
    // printf("\n");
    // count = 0;
    // while (count < 3)
    // {
    //     printf("*");
    //     count++;
    // }
    // printf("\n");
    // count = 0;
    // while (count < 4)
    // {
    //     printf("*");
    //     count++;
    // }
    // printf("\n");
    // count=0;
    // while(count<5)
    // {
    //     printf("*");
    //     count++;
    // }
}