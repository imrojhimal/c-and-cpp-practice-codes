#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,i,c;
    scanf("%d",&n);
  int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    c=n-1;
    while(c>=0)
    {
        printf("%d ",a[c]);
        c--;
    }
}
