#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,a,b,i=1;

    cin>>T;

    while(i<=T)
    {
        cin>>a>>b;
        if(a>=0 && a<=10 && b>=0 && b<=10)
        {

            cout<<"Case "<<i<<": "<<a+b<<endl;
        }
        i++;
    }




}
