#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
      int x,y,sum=0;
      cin>>x>>y;
      int ma=max(x,y);
      int mi=min(x,y);
      for(int i=mi+1;i<ma;i++)
      {
          if(i%2!=0)
          {
              sum+=i;
          }
      }
      cout<<sum<<"\n";
      t--;
    }
}
