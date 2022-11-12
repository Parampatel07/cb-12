// write a programe to store 3 countries time  with hours , minutes , second and  name of country 
#include<stdio.h>
#include<stdlib.h>
struct time
{
    int hours;
    float minutes;
    char name[25];
}t2,t3;
void main()
{
    struct time t1;
    printf("Enter the value of first country hours ");
    scanf("%d",&t1.hours);
    printf("Enter the vlaue of first country minutes ");
    scanf("%f",&t1.minutes);
    printf("Enter value of name of the counrty ");
    fflush(stdin);
    scanf("%s",t1.name);
    printf("\nEnter the value fo second country hours");
    scanf("%d",&t2.hours);
    printf("\nEnter value of second counrty minutes ");
    scanf("%f",&t2.minutes);
    printf("Enter the value of second country name ");
    scanf("%s",&t2.name);
    printf("\nEnter the value fo third country hours");
    scanf("%d",&t3.hours);
    printf("\nEnter value of third counrty minutes ");
    scanf("%f",&t3.minutes);
    printf("Enter the value of third country name ");
    scanf("%s",&t3.name);
    printf("\nthe value of first country hours is %d and minutes is %.2f and name is %s ",t1.hours,t1.minutes,t1.name);
    printf("\nthe value of second country hours is %d and minutes is %.2f and name is %s ",t2.hours,t2.minutes,t2.name);
    printf("\nthe value of third country hours is %d and minutes is %.2f and name is %s ",t3.hours,t3.minutes,t3.name);
}