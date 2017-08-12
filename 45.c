
#include<stdio.h>
void main()
{
int number1, number2;
  int sum;
  printf("Please enter the first integer to add.");
  scanf("%d",&number1);
printf("Please enter the second integer to add.");
  scanf("%d",&number2);
 sum = number1 + number2;
 printf("Sum of %d and %d = %d \n",number1, number2, sum);
if(sum%3 == 0){
    printf("The sum of these two integers is a multiple of 3!\n");
  }else {
    printf("The sum of these two integers is not a multiple of 3...\n");
  }
;
}
