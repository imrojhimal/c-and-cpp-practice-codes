#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long index,i,sum=0;
    cin>>index;
    long long a[index];

    for(i=0;i<index;i++)
    {
       cin>>a[i];
       sum=sum+a[i];
    }
     cout<<abs(sum);

}
