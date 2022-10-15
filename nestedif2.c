// Write a programe to findout which month has lowest number of days outof given three month
#include <stdio.h>
void main()
{
    int month1, month2, month3, days1, days2, days3;

    printf("Enter month 1 ");
    scanf("%d", &month1);
    printf("Enter month 2 ");
    scanf("%d", &month2);
    printf("Enter month 3 ");
    scanf("%d", &month3);

    if (month1 > 0 && month1 <= 12)
    {
        if (month1 == 1 || month1 == 3 || month1 == 5 || month1 == 7 || month1 == 8 || month1 == 10 || month1 == 12)
        {
            days1 = 31;
        }
        else if (month1 == 2)
        {
            days1 = 28;
        }
        else
        {
            days1 = 30;
        }
    }
    else
    {
        printf("month 1 is invlaid month ");
    }
    if (month2 > 0 && month2 <= 12)
    {
        if (month2 != 2)
        {
            if (month2 <= 7)
            {
                if (month2 % 2 == 0)
                {
                    days2 = 30;
                }
                else
                {
                    days2 = 31;
                }
            }
            else
            {
                if (month2 % 2 != 0)
                {
                    days2 = 30;
                }
                else
                {
                    days2 = 31;
                }
            }
        }
        else
        {
            days2 = 28;
        }
    }
    else
    {
        printf("month 2 is invalid ");
    }
    if (month3 > 0 && month3 <= 12)
    {
        if (month3 == 1 || month3 == 3 || month3 == 5 || month3 == 7 || month3 == 8 || month3 == 10 || month3 == 12)
        {
            days3 = 31;
        }
        else if (month3 == 2)
        {
            days3 = 28;
        }
        else
        {
            days3 = 30;
        }
    }
    else
    {
        printf("month 3 is invlaid month ");
    }
    printf("\nmonth 1 has %d days ",days1);
    printf("\nmonth 2 has %d days ",days2);
    printf("\nmonth 3 has %d days ",days3);

    if(days1 < days2 && days1 <days3)
    {
        printf("\nmonth 1 is lowest ");
    }
    else if(days2 < days1 && days2<days3)
    {
        printf("\nmonth 2 is lowest ");
    }
    else if(days3<days1 && days3 < days2)
    {
        printf("\nmonth 3 is lowest ");
    }
    else
    {
        printf("\nall are same ");
    }
    printf("Goodbyee..");
}