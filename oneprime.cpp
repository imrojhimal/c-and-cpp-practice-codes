#include<bits/stdc++.h>
using namespace std;
int main()
{

    int N,j,m,A;
    cin>>N;
    A=N/2;
    for(j=2;j<=A;j++)
    {
      m=N%j;
      if(m==0)
      {
          cout<<"NO";
          return 0;
      }

    }
    if(m!=0)
    {
        cout<<"YES";
    }

}
