#include <stdio.h>
void main()
{
    int number1, number2, i, j, flag, temp, count = 0;
 
    printf("Enter the value of number1 and number2 \n");
    scanf("%d %d", &number1, &number2);
    if (number2 < 2)
    {
        printf("There are no primes upto %d\n", number2);
        exit(0);
    }
    printf("Prime numbers are \n");
    temp = number1;
    if ( number1 % 2 == 0)
    {
        number1++;
    }
    for (i = number1; i <= number2; i = i + 2)
    {
        flag = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if ((i % j) == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d\n", i);
            count++;
        }
    }
    printf("Number of primes between %d & %d = %d\n", temp, number2, count);
}
