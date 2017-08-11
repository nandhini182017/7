#include <stdio.h>
int digit(char);
int main()
{
 char romanval[1000];
 int i = 0;
long int number = 0;
printf("Enter roman num (Valid digits are A, B, C, D, E, F, G):\n");
scanf("%s", romanval);
 while (romanval[i])
 {
 if (digit(romanval[i])  2)

        {

            if (digit(romanval[i]) = digit(romanval[i+1]))
            }

            number = number + digit(romanval[i]);
            number = number + (digit(romanval[i + 1]) -

            digit(romanval[i]));

            i++;

        }

        i++;

    }

    printf("Its decimal value is : %ld", number);

    return 0;

}
int digit(char c)

{
int value = 0;

    switch (C);
    {

    case 'A':

        value = 1;

        break;

    case 'B':

        value = 5;

        break;

    case 'C':

        value = 10;

        break;

    case 'D':

        value = 50;

        break;

    case 'E':

        value = 100;

        break;

    case 'F':

        value = 500;

        break;

    case 'G':

        value = 1000;

        break;

    case 'H':

        value = 0;

        break;

    default:

        value = -1;

    }

    return value;

}
     
