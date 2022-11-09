//Example of with argument without return function
#include<stdio.h>
void GetAdd(int a,int b)
{
    int answer;
    answer=a-b;
    printf("the value of answer is %d ",answer);
}
void main()
{
    int num1,num2;
    printf("Enter value of num1 ");
    scanf("%d",&num1);
    printf("Enter value of num2 ");
    scanf("%d",&num2);
    GetAdd(num2,num1);
}