// Write a programe to findout which triagnle is greater outof given 3 triangle
// area of triagnle = height * base / 2
#include <stdio.h>
void main()
{
    int height1, base1, height2, base2, height3, base3;
    float area1, area2, area3;
    printf("Enter value of height 1 ");
    scanf("%d", &height1);
    printf("Enter value of base 1 ");
    scanf("%d", &base1);
    printf("Enter value of height 2 ");
    scanf("%d", &height2);
    printf("Enter value of base 2 ");
    scanf("%d", &base2);
    printf("Enter value of height 3");
    scanf("%d", &height3);
    printf("Enter value of base 3 ");
    scanf("%d", &base3);
    area1 = height1 * base1/2;
    area2 = height2 * base2/2;
    area3 = height3 * base3/2;
    if (area1 == area2)
    {
        if (area2 == area3)
        {
            printf("All are same  ");
        }
    }
    else
    {
        if (area1 > area2)
        {
            if (area1 > area3)
            {
                printf("the triagnle 1 is greater than all ");
            }
            else
            {
                printf("the triangle 3 is greater than all ");
            }
        }
        else
        {
            if (area2 > area3)
            {
                printf("The triangle 2 is greater than all ");
            }
            else
            {
                printf("The triangle 3 is greater than all ");
            }
        }
    }
    printf("\nGoodbyee...");
}