#include <stdio.h>
void main()
{
    int count,temp,flash=1;
    printf("%d ",flash);
    printf("\n");
    // printf("*");
    // printf("_");
    // printf("*");
    // printf("\n");
    // printf("*");
    temp=0;
    do
    {
        flash=1;
        printf("%d",flash);
        count = 0;
        do
        {
            printf(" ");
            count++;
            flash++;
        } while (count <= temp);
        printf("%d",flash);
        printf("\n");
        temp++;
    }while(temp<4);
    count = 0;
    flash=1;
    do
    {
        printf("%d",flash);
        count++;
        flash++;
    } while (count < 7);
}