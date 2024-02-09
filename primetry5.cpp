#include<bits/stdc++.h>
using namespace std;
int main()
    {
     int n,j,i=2;
     cin>>n;
     while(n>=i)
     {
         for(j=2;j<=i/2;j++)
         {
             if(i%j==0)
             {
                 cout<<i<<endl;
             }
         }
      i++;
     }
    }

