#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j=1,m;
    cin>>n;
    while(j<=n)
    {
        m=n%j;
        if(m==0)
        {
            cout<<j<<endl;
        }
     j++;
    }
}
