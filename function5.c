// Example of function 
// with argument with return
//write a programe to peform addition 
#include<stdio.h>
int Getadd(int num1,int num2)
{
    int answer = num1 + num2 ;
    return answer;
}
void main()
{
    int num1,num2,answer;
    printf("Enter value of num1 ");
    scanf("%d",&num1);
    printf("Enter value of num2 ");
    scanf("%d",&num2);
    answer=Getadd(num1,num2);
    printf("the value of answer is %d ",answer);
}