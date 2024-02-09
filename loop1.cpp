#include<bits/stdc++.h>
using namespace std;
int main()
{
    int limit,num,pos=0,neg=0,even=0,odd=0,z=0;
    cin>>limit;
    while(limit)
    {
        cin>>num;
        if(num%2==0)
        {
            even++;
        }
        else{

            odd++;
        }
        if(num>0)
        {
            pos++;
        }
        else if(num==0)
        {
            z++;
        }
        else{

            neg++;
        }
        limit--;
    }
    cout<<"Even: "<<even<<endl<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<pos<<endl<<"Negative: "<<neg;
}
