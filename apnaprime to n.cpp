#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,b;
    cin>>a>>b;
    for(int num=a;num<=b;num++)
    {
         for(i=2;i<b;i++)
    {
        if(num%i==0)
        {

            break;
        }
    }
    if(i==num)
    {
        cout<<num<<endl;
    }
    }

}

