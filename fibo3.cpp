#include<bits/stdc++.h>
using namespace std;
    int main()
    {
        int n,i=3;
         cin>>n;
          if(n==1)
        {
             cout<<"0"<<" ";
             return 0;
        }
        else if(n==2)
        {
                cout<<"0 1"<<" ";
                return 0;
        }

        int first=0,second=1,fibo=0;
        cout<<0<<" "<<1<<" ";



        while(i<=n)
        {
            fibo=first+second;
            first=second;
            cout<<fibo<<" ";

            second=fibo;
            i++;
        }

    }
