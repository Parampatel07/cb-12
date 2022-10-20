// write a program to findout power of given number using given exponent
#include <stdio.h>
void main()
{
    int base, exponent, power,count;
    printf("Enter value of base ");
    scanf("%d", &base);
    printf("Enter value of exponent ");
    scanf("%d", &exponent);
    // base=5;
    // exponent=7;
    // 5*5*5*5*5*5*5
    power = base * base;
    for(count=3;count<=exponent ;count++)
    {
        power = power * base;
        // printf("\n the value of count is %d ",count);
    }
    printf("The value of power is %d ", power);
}