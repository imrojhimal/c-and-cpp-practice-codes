#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int len= s.length();
    int i;
    for(i=0;i<len;i++)
    {
        if(s[i]=='\\')
        {
            break;
        }
    cout<<s[i];
    }
}
