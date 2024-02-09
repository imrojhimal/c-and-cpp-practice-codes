#include<bits/stdc++.h>
using namespace std;
    int main()
    {
        int n,i=1,first=0,second=1,fibo=0;
        cin>>n;
        while(i<n)
        {
            fibo=first+second;
            first=second;

            second=fibo;
            i++;
        }
        if(n==1)
        {
            cout<<n;
        }
        else{
              cout<<fibo;
        }
    }
