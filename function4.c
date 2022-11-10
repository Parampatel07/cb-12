// Example of function 
// without argument with return 
//programe to find area of cricle 
// area = pi*r*r ;
#include<stdio.h>
float getPi()
{
    float pi=3.1415926535;
    return pi;
}
void main()
{
    int radius;
    float pi,area;
    printf("Enter value of radius ");
    scanf("%d",&radius);
    pi=getPi();
    area=pi*(radius*radius);
    printf("the value of area is %f ",area);
}