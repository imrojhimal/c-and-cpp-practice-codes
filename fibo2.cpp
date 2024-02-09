#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=2;

    cin>>n;
    int a[100];
    a[0]=0,a[1]=1;
    while(i<n)
    {
        a[i]=a[i-1]+a[i-2];

        i++;

    }
    for(i=0;i<n;i++)
    {
          cout<<a[i]<<"\t";
    }

}
