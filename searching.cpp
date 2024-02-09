#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,i,pos=-1;
    cin>>N;
    long long a[N];
    for(i=0;i<N;i++)
    {
        cin>>a[i];
    }
    int item;
    cin>>item;
    for(i=0;i<N;i++)
    {
        if(a[i]==item)
           {
               pos=i;
               cout<<pos;
               break;
           }

    }
    if(pos==-1)
    {
        cout<<pos;
    }
}
