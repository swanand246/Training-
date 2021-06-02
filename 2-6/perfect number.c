//Write a program to print all perfect numbers between 1 to n

#include <stdio.h>

int main()
{
    int i, j, lower, upper, sum;

    
    printf("Enter the number from which perfect number is to be displayed: ");
    scanf("%d", &lower);
    printf("Enter the number upto the perfect number is to be displayed: ");
    scanf("%d", &upper);

    printf("All Perfect numbers between %d to %d:\n", lower, upper);
    
    // Iterate from lower to upper 
    for(i=lower; i<=upper; i++)
    {
        sum = 0;

        //Checking condition of the current number perfect or not
        for(j=1; j<i; j++)
        {
            if(i % j == 0)
            {
                sum =sum + j;
            }
        }
 
        // If the current number i is Perfect number 
        if(sum == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
