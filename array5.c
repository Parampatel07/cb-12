// write a program to find highest runs out of given 5 runs take runs as an input from user
#include <stdio.h>
void main()
{
    int runs[5], count = 0, temp;
    do
    {
        printf("Enter value of runs %d", count + 1);
        scanf("%d", &runs[count]);
        count++;
    } while (count < 5);
    for (count = 0; count < 5; count++)
    {
        printf("\nthe value of run %d = %d ", count + 1, runs[count]);
    }
    // this is bubble sorting
    count=0;
    while(count<5)
    {
    if (runs[count] < runs[0])
    {
        temp = runs[count];
        runs[count] = runs[0];
        runs[0] = temp;
    }
    count++;
    }
    //this is for bubble sorting
    // if (runs[2] > runs[0])
    // {
    //     temp = runs[2];
    //     runs[2] = runs[0];
    //     runs[0] = temp;
    // }
    // if (runs[3] > runs[0])
    // {
    //     temp = runs[3];
    //     runs[3] = runs[0];
    //     runs[0] = temp;
    // }
    // if (runs[4] > runs[0])
    // {
    //     temp = runs[4];
    //     runs[4] = runs[0];
    //     runs[0] = temp;
    // }
    printf("\nthe highest value of all %d ",runs[0]);
    
    // this is normal sorting
    //  if(runs[0]>runs[1])
    //  {
    //      printf("run %d is greater",runs[0]);
    //  }
    //  else if(runs[1]>runs[0])
    //  {
    //      printf("run %d is greater",runs[1]);
    //  }
    //  else if(runs[2]>runs[1])
    //  {
    //      printf("run %d is greater",runs[2]);
    //  }
    //  else if(runs[1]>runs[2])
    //  {
    //  }
}
