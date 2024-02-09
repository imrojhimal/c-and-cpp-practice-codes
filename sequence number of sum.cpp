#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(1)
    {

     cin>>n>>m;
      long long sum=0;
      if(n>=-100&&n<=100&&m>=-100&&m<=100)
      {
              if(n<=0||m<=0)
     {
         return 0;
     }
     if(n>=m)
     {
         for(int i=m;i<=n;i++)
         {
             sum+=i;
             cout<<i<<" ";
         }
         cout<<"sum ="<<sum<<"\n";

     }
     if (n<=m)
     {
         for(int i=n;i<=m;i++)
         {
             sum+=i;
             cout<<i<<" ";
         }
         cout<<"sum ="<<sum<<"\n";

     }


    }
      }



}
