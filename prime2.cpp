#include<bits/stdc++.h>
using namespace std;
int main()
{
 int i=2,j,n;
 cin>>n;
 while(i<=n)
 {
     int ch=0;
     for(j=1;j<=i;j++)
     {
         if(i%j==0)
         {
             ch=ch+1;

         }
     }
  if(ch==2)
  {
      cout<<i<<" ";
  }
 i++;
 }

}
