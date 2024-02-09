#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long N,i;
    cin>>N;
    for(i=1;i<=N;i++)
    {

      if(N==0||N==1)
     {
         cout<<"-1"<<endl;
     }
      else if(i%2==0)
        {
            cout<<i<<endl;
        }


    }
}
