#include<stdio.h>
int main()
{
 int n,last;
 printf("\n Enter Last Number : ");
 scanf("%d",&last);
 printf("\n Even Number List :\n ");

 n=2;
 while(n<=last)
 {
  printf(" %d",n);
  n=n+2;
 }
return0;
}
