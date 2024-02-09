#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=1,c,j;
    cin>>t;
    string s;
    while(i<=t)
    {
        int sum=0,sum1=0;
        cin>>s;
        int s1=s.length();
        int h=s1/2;
        for(j=0;j<h;j++)
        {
          sum=sum+s[j];
        }
        for(c=h;c<=s1;c++)
        {
            sum1=sum1+s[c];
        }
        if (sum!=sum1)
            {
                cout<<"no"<<"\n";
            }
        else if(sum==sum1)
            {
                cout<<"yes"<<"\n";
            }
        i++;
    }

}
