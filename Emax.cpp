#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=1,maxx=0,num;
    cin>>n;
    while(i<=n)
    {
        cin>>num;
        if(maxx<num)
        {
            maxx=num;
        }

    i++;
    }
    cout<<maxx;
}
