#include<stdio.h>
int main()
{
  int year;
  int sum=0;
  scanf("%d",&year);
  for(int i=1;i<=year;i++)
  {
      sum=pow(2,i)-1;
  }
  printf("%d",sum);
}
