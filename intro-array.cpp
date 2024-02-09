#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,i,c;
   cin>>n;
  int a[n];
    for(i=0;i<n;i++)
    {
       cin>>a[i];
    }
    c=n-1;
    while(c>=0)
    {
        cout<<a[c];
        c--;
    }
}
