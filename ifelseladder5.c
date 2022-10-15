// 2] Write a programe to findout income tax based on given condition take monthly income as input 
// yearly income     tax rate
// <3,00,000         5%  

// >=3,00,000
// <5,00,000         10%  

// >=5,00,000
// <8,00,000         20%

// >=8,00,000        30%  
#include<stdio.h>
void main()
{
    int monthly_income,yearly_income,tax_rate;
    float income_tax;
    printf("Enter your monthly income ");
    scanf("%d",&monthly_income);
    yearly_income = monthly_income * 12;
    printf("\nyour yearly income is %d ",yearly_income);
    if(yearly_income<300000)
    {
        tax_rate=5;
    }
    else if(yearly_income>=300000 && yearly_income<500000)
    {
        tax_rate = 10;
    }
    else if(yearly_income >= 500000 && yearly_income <800000)
    {
        tax_rate=20;
    }
    else if(yearly_income>=800000)
        tax_rate=30;

    income_tax = yearly_income * tax_rate /100 ;
    printf("\nYour Income tax is %f ",income_tax);   
}