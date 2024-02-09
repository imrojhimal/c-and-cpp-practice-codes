#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,m,rem,gcd;
    cin>>a>>b;
    n=a;
    m=b;
    while(m!=0)
      {
            rem=n%m;
            n=m;
            m=rem;
      }
      gcd=n;
      cout<<n;

}
