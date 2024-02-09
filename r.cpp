#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(1)
    {

     cin>>n>>m;
      long long sum=0;
      int ma=max(n,m);
      int mi=min(n,m);
      if(n>=-100&&n<=100&&m>=-100&&m<=100)
      {
        if(n<=0||m<=0)
     {
         return 0;
     }

     }


         for(int i=mi;i<=ma;i++)
         {
             sum+=i;
             cout<<i<<" ";
         }
         cout<<"sum ="<<sum<<"\n";




    }

}
