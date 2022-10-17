// 1] Write a programe to print all even number
// 2, 4, 6, 8, 10, 12, .....5000
#include <stdio.h>
void main()
{
    int number = 50001;
    while(number>=5000)
    {
        printf("%d, ", number);
        number = number + 2;
    }
}