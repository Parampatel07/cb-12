// write a programe to find bmi
// bmi = weight / height*height
#include <stdio.h>
float totalinch(int foot,int inch)
{
    float totalfoot;
    totalfoot = foot*12+inch;
    printf("\nthe value of foot is %f",totalfoot);
    return totalfoot;
}
float getmeter(float totalfoot)
{
    float meter;
    meter = totalfoot/39.37;
    printf("\nthe value of meter is %f",meter);
    return meter;
}
void main()
{
    float weight,totalfoot,meter,bmi;
    int foot, inch;
    printf("Enter value of weight ");
    scanf("%f",&weight);
    printf("Enter value of height in foot ");
    scanf("%d",&foot);
    printf("Enter value of height in inch ");
    scanf("%d",&inch);
    totalfoot = totalinch(foot,inch);
    meter=getmeter(totalfoot);
    bmi = (weight)/(meter*meter);
    printf("Your bmi is %f",bmi);
}