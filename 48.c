#include <stdio.h>
void main()
{
    int m, i;
    float num[100], sum = 0.0, average;

    printf("Enter the numbers of elements: ");
    scanf("%d", &m);

    while (m > 100 || m <= 0)
    {
        printf("Error! number should in range of (1 to 100).\m");
        printf("Enter the number again: ");
        scanf("%d", &m);
    }

    for(i = 0; i < m; ++i)
    {
        printf("%d. Enter number: ", i+1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    average = sum / m;
    printf("Average = %.2f", average);
}

