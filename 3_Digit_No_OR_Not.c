#include<stdio.h>
int main()
{
  int n;
  printf("Enter the no.");
  scanf("%d",&n);
  if(n>99 && n<1000)
  printf("The no. is a 3 digit no.");
  else
  printf("The no. is not a 3 digit no.");
  return 0;
}