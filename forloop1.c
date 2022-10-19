// 1, 5, 12, 22, 35, 51, 70, 92, 117, 145, 176 ... 3000
//    4   7   10  13  16  19
#include <stdio.h>
void main()
{
    int number = 1, temp = 4, adder = 3,count=0;

    printf("%d ", number);
    number = temp + number;
    printf("%d ", number);

    for(count=0;number<2882;count++)
    {
        number = temp + number + adder;
        printf("%d ", number);
        adder = adder + 3;
    }

    // number=temp+number+adder;
    // printf("%d ",number);
    // adder=adder+3;
    // number=temp+number+adder;
    // printf("%d ",number);
    // adder=adder+3;
    // number=temp+number+adder;
    // printf("%d ",number);
    // adder=adder+3;
    // number=temp+number+adder;
    // printf("%d ",number);
}