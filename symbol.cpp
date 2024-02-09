#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s;
    cin>>s;
    int n;
    cin>>n;
    int j;
    if(n<=50)
        {
            while(n)
            {
                cin>>j;
                for(int i=0;i<j;i++)
                {
                    cout<<s;
                }

                cout<<endl;
                n--;
            }

        }
}
