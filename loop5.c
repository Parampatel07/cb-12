// 2]0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55 ... 1000
// 1   2   3   4   5   6   7   8   9   10
#include <stdio.h>
void main()
{
    int number = 0, temp = 1;
    printf("%d ", number);
    while(number<990)
    {
        number = number + temp;
        printf("%d ", number);
        temp = temp + 1;
    }
}
//     printf("%d ",number);
//     temp=temp+1;
//     number=number+temp;
//     printf("%d ",number);
//     temp=temp+1;
//     number=number+temp;
//     printf("%d ",number);
//     temp=temp+1;
//     number=number+temp;
//     printf("%d ",number);
//     temp=temp+1;
//     number=number+temp;
//     printf("%d ",number);
//     number=number+6;