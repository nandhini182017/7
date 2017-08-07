#include <stdio.h>
 int main()
{
    int limit;
      printf("Enter the range to print: ");
    scanf("%d", &limit);
     printf("\n\nAll odd numbers from 1 to %d are: ", limit);
    printOdd(1, limit);
     
    return 0;
}
 
