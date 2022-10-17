// 2, 1, 3, 4, 7, 11, 18, 29, 47, 76, 123 .... 3000
#include <stdio.h>
void main()
{
    int first = 2, second = 1, third=0, temp = 3;

    printf("%d ", first);
    printf("%d ", second);

    while(third<1364)
    {
        third = first + second;
        first = third;
        printf("%d ", third);
        third = second + third;
        second = third;
        printf("%d ", third);
    }
}