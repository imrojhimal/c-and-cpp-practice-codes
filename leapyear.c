#include<stdio.h>
void main()
{
int n,d;
printf("Enter any Positive Integer:");
scanf("%d", &n);
while(n!=0)
{
d=n%10;
printf("%d",d);
n=n/10;
}

}

