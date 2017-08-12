#include<stdio.h>
void main()
{
char str1[50], str2[70];
   int i;
   printf("\nEnter two strings :");
   gets(str1);
   gets(str2);
 i = 0;
   while (str1[i] == str2[i] && str1[i] != '\0')
      i++;
   if (str1[i] > str2[i])
      printf("str1 > str2");
   else if (str1[i] < str2[i])
      printf("str1 < str2");
   else
      printf("str1 = str2");
}
