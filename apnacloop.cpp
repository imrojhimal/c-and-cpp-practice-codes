#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%3==0)
        {

            cout<<"\n";
            continue;
        }
        cout<<i<<" ";
    }

}
