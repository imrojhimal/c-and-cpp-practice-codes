long longhexadecimal(string n2)
{
    int x=1,ans=0;

    int s=n2.size();
    for(int i=s-1;i>=0;i++)
    {
        if(n2[i]>=0&&n2[i]<=9)
        {
            ans=ans+x*(n2[i]-'0');
        }
        else if(n2[i]>='A'&&n2[i]<='F')
        {
            ans=ans+(x*(n2[i]-'A'+10));
        }
        x*=16;
    }
    cout<<ans<<endl;
    return ans;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n2;
    cin>>n2;
    cout<<hexadecimal(n2)<<endl;
}
