#include <stdio.h>
int main()
{
printf("Enter a three digit integer: ");
    scanf("%d", &number);
 while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += remainder*remainder*remainder;
       }

    if(result == number)
        printf("%d is an Armstrong number.",number);
    else
        printf("%d is not an Armstrong number.",number);
}
    
