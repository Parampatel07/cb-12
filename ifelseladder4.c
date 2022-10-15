// 1] Write a programe to findout how many days a month has accpect month from user 
#include<stdio.h>
void main()
{
    int month;
    printf("Enter your month number ");
    scanf("%d",&month);

    if(month==1)
    {
        printf("It has 31 days ");
    }
    else if(month==2)
    {
        printf("It has 28/29 days ");
    }
    else if(month==3)
    {
        printf("It has 31 days ");
    }
    else if(month==4)
    {
        printf("It has 30 days ");
    }
    else if(month==5)
    {
        printf("It has 31 days ");
    }
    else if(month==6)
    {
        printf("It has 30 days ");
    }
    else if(month==7)
        printf("It has 31 days ");
    else if(month==8)
        printf("It has 31 days");
    else if(month==9)
        printf("It has 30 days ");
    else if(month==10)  
        printf("It has 31 days ");
    else if(month==11)
        printf("It has 30 days ");
    else if(month==12)
        printf("It has 31 days ");
}