#include <stdio.h>


int main()
{
  int i,num;
  printf("write a number");
  scanf("%d",&num);
  for(i=2;i<=num/2;i++)
  {
    if(num%i==0)
    {
      printf("Is a Prime Number");
    }
    else
    {
      printf("Is not a Prime Number");
    }
  }
    return 0;
  }
