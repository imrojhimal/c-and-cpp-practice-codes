#include<bits/stdc++.h>>
using namespace std;
int main()
{
    long long n,remainder,palindrome=0,temp;
    cin>>n;
    temp=n;
    while(temp!=0)
    {
        remainder=temp%10;
        palindrome=(palindrome*10)+remainder;
        temp=temp/10;
    }
    if(n==palindrome)
    {
        cout<<palindrome<<endl<<"YES";
    }
    else
        {
            cout<<palindrome<<endl<<"NO";
        }
}
