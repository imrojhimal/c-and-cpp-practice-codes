#include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     int a,b,n1,n2,rem,gcd;
     cin>>a>>b;
     n1=a;
     n2=b;
     while(n2!=0)
        {
            rem=n1%n2;
           n1=n2;
           n2=rem;
        }
        gcd=n1;

        cout<<gcd;

 }
