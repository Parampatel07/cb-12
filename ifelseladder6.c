// 12) Write a program to display zodiac symbol & given zodiac sign from given birth day and month as per following criteria.
#include<stdio.h>
void main()
{
    int month,days;
    printf("Enter your birth month ");
    scanf("%d",&month);
    printf("Enter your birth date ");
    scanf("%d",&days);
    if((month==3 && days>=21 && days<=31) || (month==4 &&days>=1 && days<=19))
    {
        printf("your zodiac sign is aries and symbol is the ram ");
    }
}